#include <stdio.h>
#include <string.h>
#include <cipherhouse/affine.h>

int main()
{
    int encmsg = strcmp("insxchmrwbglqvafkpuzejotyd", affine_encrypt("abcdefghijklmnopqrstuvwxyz", 5, 8));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", affine_decrypt("insxchmrwbglqvafkpuzejotyd", 5, 8));
    int nencmsg = strcmp("insxchmrwbglqvafkpuzejotyd", affine_n_encrypt("abcdefghijklmnopqrstuvwxyz", 26, 5, 8));
    int ndecmsg = strcmp("abcdefghijklmnopqrstuvwxyz", affine_n_decrypt("insxchmrwbglqvafkpuzejotyd", 26, 5, 8));


    return decmsg || encmsg || ndecmsg || nencmsg;
}