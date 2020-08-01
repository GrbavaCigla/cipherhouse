#include <stdio.h>
#include <string.h>
#include <cipherhouse/atbash.h>

int main()
{
    int encmsg = strcmp("zyxwvutsrqponmlkjihgfedcba", atbash_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", atbash_decrypt("zyxwvutsrqponmlkjihgfedcba"));
    return decmsg || encmsg;
}