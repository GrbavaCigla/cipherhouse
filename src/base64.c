#include "cipherhouse/base64.h"

char *base64_encrypt(const char *text)
{
    return b64_encode(text, strlen(text));
}
unsigned char *base64_decrypt(const char *text)
{
    return b64_decode(text, strlen(text));
}

char *base64_n_encrypt(const char *text, size_t textlen)
{
    return b64_encode(text, textlen);
}
unsigned char *base64_n_decrypt(const char *text, size_t textlen)
{
    return b64_decode(text, textlen);
}

