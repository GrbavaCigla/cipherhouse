#include "cipherhouse/vigenere.h"

unsigned char *vigenere_encrypt(const char *text, const char *key)
{
    size_t textlen = strlen(text);
    size_t keylen = strlen(key);
    unsigned char *encrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++)
    {
        int y = key[i % keylen];
        int typek = typetxt(y);

        if (typek == -1)
        {
            y -= 65;
        }
        else
        {
            y -= 97;
        }

        int x = text[i];
        int typet = typetxt(x);
        char encc = x;

        if (typet == -1)
        {
            encc = (x - 65 + y) % 26 + 65;
        }
        else if (typet == 0)
        {
            encc = (x - 97 + y) % 26 + 97;
        }

        encrypted[i] = encc;
    }
    return encrypted;
}


unsigned char *vigenere_decrypt(const char *text, const char *key)
{
    size_t textlen = strlen(text);
    size_t keylen = strlen(key);
    char* decrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++) {
        int y = key[i % keylen];
        int typek = typetxt(y);

        if (typek == -1)
        {
            y -= 65;
        }
        else
        {
            y -= 97;
        }

        int x = text[i];

        int decc = x - 97 - y;

        if (decc >= 0) {
            decc = decc % 26 + 97;
        }
        else {
            decc = 26 - (-decc % 26) + 97;
        }

        decrypted[i] = (char)decc;
    }
    return decrypted;
}
