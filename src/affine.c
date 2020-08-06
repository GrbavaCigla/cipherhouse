#include "cipherhouse/affine.h"

#include "cipherhouse/common.h"

unsigned char* affine_encrypt(const char* text, int a, int b)
{
    size_t textlen = strlen(text);

    return affine_n_encrypt(text, textlen, a, b);
}

unsigned char* affine_decrypt(const char* text, int a, int b)
{
    size_t textlen = strlen(text);

    return affine_n_decrypt(text, textlen, a, b);
}

unsigned char* affine_n_encrypt(const char* text, size_t textlen, int a,
    int b)
{
    char* encrypted = malloc(textlen);

    for (int i = 0; i < (int)textlen; i++) {
        int x = text[i];
        int typet = typetxt(x);
        char encc = x;

        if (typet == -1) {
            encc = (a * (x - 65) + b) % 26 + 65;
        } else if (typet == 0) {
            encc = (a * (x - 97) + b) % 26 + 97;
        }

        encrypted[i] = encc;
    }
    return encrypted;
}

unsigned char* affine_n_decrypt(const char* text, size_t textlen, int a,
    int b)
{
    char* decrypted = malloc(textlen);

    int _a = 26 - a;

    for (int i = 0; i < (int)textlen; i++) {
        int x = text[i];

        int decc = _a * (x - 97 - b);

        if (decc >= 0) {
            decc = decc % 26 + 97;
        } else {
            decc = 26 - (abs(decc) % 26) + 97;
        }

        decrypted[i] = (char)decc;
    }
    return decrypted;
}