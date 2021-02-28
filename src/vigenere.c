#include "cipherhouse/vigenere.h"
#include "cipherhouse/common.h"

unsigned char *vigenere_encrypt(const char *text, const char *key)
{
    size_t textlen = strlen(text);
    size_t keylen = strlen(key);

    vigenere_n_encrypt(text, key, textlen, keylen);
}


unsigned char *vigenere_decrypt(const char *text, const char *key)
{
    size_t textlen = strlen(text);
    size_t keylen = strlen(key);
    return vigenere_n_decrypt(text, key, textlen, keylen);
}

unsigned char *vigenere_n_encrypt(const char *text, const char *key, size_t textlen, size_t keylen)
{
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

        if (typet != 1)
        {
            int offset = typet == 0 ? 'a' : 'A';
            encc = (x - offset + y) % 26 + offset;
        }

        encrypted[i] = encc;
    }
    return encrypted;
}

unsigned char *vigenere_n_decrypt(const char *text, const char *key, size_t textlen, size_t keylen)
{
    char *decrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++)
    {
        int x = text[i];
        int y = key[i % keylen];
        int decc = x;
        int typet = typetxt(x);
        int typek = typetxt(y);

        if (typet != 1 && typek != 1)
        {
            int offset = typet == 0 ? 'a' : 'A';
            int offsek = typek == 0 ? 'a' : 'A';

            decc = x - offset - y + offsek;
            decc = mod(decc, 26) + offset;
        }

        decrypted[i] = (char)decc;
    }
    return decrypted;
}
