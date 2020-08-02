#include "cipherhouse/bacon.h"

char *bacon_encrypt(const char *text)
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

char *bacon_decrypt(const char *text)
{
    size_t textlen = strlen(text);
    char *decrypted = malloc(textlen / 5);

    for (int i = 0; i < (int)textlen; i++)
    {
        char temp[5];
        if (text[i] == 'a')
        {
            temp[i % 5] = '0';
        }
        else
        {
            temp[i % 5] = '1';
        }

        if (i % 5 == 4)
        {
            decrypted[i / 5] = strtol(temp, 0, 2) + 97;
        }
    }

    return decrypted;
}