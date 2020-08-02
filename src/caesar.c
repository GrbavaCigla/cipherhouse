#include "cipherhouse/caesar.h"
#include "cipherhouse/affine.h"

unsigned char *caesar_encrypt(const char *text, int n)
{
    return affine_encrypt(text, 1, n);
}
unsigned char *caesar_decrypt(const char *text, int n)
{
    return affine_encrypt(text, 1, 26 - n);
}
