#include "cipherhouse/baconian.h"

char *baconian_encrypt(const char *text)
{
    size_t textlen = strlen(text);
    char *encrypted = malloc(textlen * 5);

    for (int i = 0; i < (int)textlen; i++)
    {
        for (int j = 4; j >= 0; j--)
        {
            encrypted[4 - j + i * 5] = ((text[i] - 97) & (1 << j)) ? 'b' : 'a';
        }
    }
    return encrypted;
}

char *baconian_decrypt(const char *text)
{
    size_t textlen = strlen(text);
    char *decrypted = malloc(textlen / 5);

    for (int i = 0; i < (int)textlen; i += 5)
    {
        for (int j = 4; j >= 0; j--)
        {
        }
    }
    return decrypted;
}