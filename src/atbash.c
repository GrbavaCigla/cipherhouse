#include "cipherhouse/affine.h"

char *atbash_encrypt(char *text)
{
    return affine_encrypt(text, 25, 25);
}

char *atbash_decrypt(char *text)
{
    return atbash_encrypt(text);
}