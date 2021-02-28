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
            y -= 65;
        else
            y -= 97;

        int x = text[i];
        int typet = typetxt(x);
        char encc = x;

        if (typet != 1) {
            int offset = typet == 0 ? 'a' : 'A';
            encc = (x - offset + y) % 26 + offset;
        }

        encrypted[i] = encc;
    }
    return encrypted;
}

unsigned char *vigenere_decrypt(const char *text, const char *key)
{
    size_t textlen = strlen(text);
    size_t keylen = strlen(key);
    char *decrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++)
    {
        int y = key[i % keylen];
        int typek = typetxt(y);

        decrypted[i] = (char)decc;
    }
    return decrypted;
}
