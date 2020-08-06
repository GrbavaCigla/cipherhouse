#include <stdio.h>
#include <string.h>
#include <cipherhouse/atbash.h>

int main()
{
    int encmsg = strcmp("zyxwvutsrqponmlkjihgfedcba", atbash_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", atbash_decrypt("zyxwvutsrqponmlkjihgfedcba"));
    int nencmsg = strcmp("zyxwvutsrqponmlkjihgfedcba", atbash_n_encrypt("abcdefghijklmnopqrstuvwxyz", 26));
    int ndecmsg = strcmp("abcdefghijklmnopqrstuvwxyz", atbash_n_decrypt("zyxwvutsrqponmlkjihgfedcba", 26));

    return decmsg || encmsg || nencmsg || ndecmsg;
}