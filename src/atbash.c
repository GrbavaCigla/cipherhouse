#include "cipherhouse/affine.h"

unsigned char *atbash_encrypt(char *text)
{
    return affine_encrypt(text, 25, 25);
}

unsigned char *atbash_decrypt(char *text)
{
    return atbash_encrypt(text);
}

unsigned char *atbash_n_encrypt(char *text, size_t textlen)
{
    return affine_n_encrypt(text, textlen, 25, 25);
}

unsigned char *atbash_n_decrypt(char *text, size_t textlen)
{
    return atbash_n_encrypt(text, textlen);
}