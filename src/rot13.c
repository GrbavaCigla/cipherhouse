#include "cipherhouse/rot13.h"
#include "cipherhouse/caesar.h"

unsigned char *rot13_encrypt(const char *text)
{
    return caesar_encrypt(text, 13);
}
unsigned char *rot13_decrypt(const char *text)
{
    return caesar_encrypt(text, 13);
}

unsigned char *rot13_n_encrypt(const char *text, size_t textlen)
{
    return caesar_n_encrypt(text, textlen, 13);
}
unsigned char *rot13_n_decrypt(const char *text, size_t textlen)
{
    return caesar_n_encrypt(text, textlen, 13);
}

