#include "cipherhouse/affine.h"
#include "cipherhouse/common.h"

char *affine_encrypt(char *text, int a, int b)
{
    size_t textlen = strlen(text);

    char *encrypted = malloc(textlen);
    char encrypted_c[textlen];

    for (int i = 0; i < (int)textlen; i++)
    {
        int x = text[i];
        int typet = typetxt(x);
        char encc = x;

        if (typet == -1)
        {
            encc = (a * (x - 65) + b) % 26 + 65;
        }
        else if (typet == 0)
        {
            encc = (a * (x - 97) + b) % 26 + 97;
        }

        encrypted_c[i] = encc;
    }
    strncpy(encrypted, encrypted_c, textlen);
    return encrypted;
}

char *affine_decrypt(char *text, int a, int b)
{
    size_t textlen = strlen(text);

    char *decrypted = malloc(textlen);
    char decrypted_c[textlen];

    int _a = 26 - a;

    for (int i = 0; i < (int)textlen; i++)
    {
        int x = text[i];

        int decc = _a * (x - 97 - b);

        if (decc >= 0)
        {
            decc = decc % 26 + 97;
        }
        else
        {
            decc = 26 - (abs(decc) % 26) + 97;
        }

        decrypted_c[i] = (char)decc;
    }
    strncpy(decrypted, decrypted_c, textlen);
    return decrypted;
}