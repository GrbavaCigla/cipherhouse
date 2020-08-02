#include "cipherhouse/base64.h"

unsigned char *base64_encrypt(const char *text)
{
    return b64_encode(text, strlen(text));
}
unsigned char *base64_decrypt(const char *text)
{
    return b64_decode(text, strlen(text));
}