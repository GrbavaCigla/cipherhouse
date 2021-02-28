#include "cipherhouse/affine.h"
#include "cipherhouse/common.h"

unsigned char *affine_encrypt(const char *text, int a, int b)
{
    size_t textlen = strlen(text);

    return affine_n_encrypt(text, textlen, a, b);
}

unsigned char *affine_decrypt(const char *text, int a, int b)
{
    size_t textlen = strlen(text);

    return affine_n_decrypt(text, textlen, a, b);
}

unsigned char *affine_n_encrypt(const char *text, size_t textlen, int a, int b)
{
    char *encrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++)
    {
        int x = text[i];
        int typet = typetxt(x);
        char encc = x;

        if(typet != 1) {
            int offset = typet == 0 ? 'a' : 'A';
            encc = (a * (x - offset) + b) % 26 + offset;
        }

        encrypted[i] = encc;
    }
    return encrypted;
}

unsigned char *affine_n_decrypt(const char *text, size_t textlen, int a, int b)
{
    char *decrypted = malloc(textlen);

    int _a = 26 - a;

    for (int i = 0; i < (int)textlen; i++)
    {
        int x = text[i];
        int decc = x;
        int typet = typetxt(x);

        if (typet != 1)
        {
            int offset = typet == 0 ? 'a' : 'A';

            decc = _a * (x - offset - b);

            decc = mod(decc, 26) + offset;
        }

        decrypted[i] = (char)decc;
    }
    return decrypted;
}