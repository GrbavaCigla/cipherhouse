#include "cipherhouse/affine.h"

unsigned char *atbash_encrypt(char *text)
{
    return affine_encrypt(text, 25, 25);
}

unsigned char *atbash_decrypt(char *text)
{
    return atbash_encrypt(text);
}