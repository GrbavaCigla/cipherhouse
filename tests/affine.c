#include <stdio.h>
#include <string.h>
#include <cipherhouse/affine.h>

int main()
{
    int u_encmsg = strcmp("INSXCHMRWBGLQVAFKPUZEJOTYD", affine_encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 5, 8));
    int u_decmsg = strcmp("ABCDEFGHIJKLMNOPQRSTUVWXYZ", affine_decrypt("INSXCHMRWBGLQVAFKPUZEJOTYD", 5, 8));
    int l_encmsg = strcmp("insxchmrwbglqvafkpuzejotyd", affine_encrypt("abcdefghijklmnopqrstuvwxyz", 5, 8));
    int l_decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", affine_decrypt("insxchmrwbglqvafkpuzejotyd", 5, 8));

    return u_encmsg || u_decmsg || l_encmsg || l_decmsg;
}