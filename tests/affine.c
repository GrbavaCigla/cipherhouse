#include <stdio.h>
#include <string.h>
#include <cipherhouse/affine.h>

int main()
{
    int encmsg = strcmp("insxchmrwbglqvafkpuzejotyd", affine_encrypt("abcdefghijklmnopqrstuvwxyz", 5, 8));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", affine_decrypt("insxchmrwbglqvafkpuzejotyd", 5, 8));
    return decmsg || encmsg;
}