#include <stdio.h>
#include <string.h>
#include <cipherhouse/atbash.h>

int main()
{
    int u_encmsg = strcmp("ZYXWVUTSRQPONMLKJIHGFEDCBA", atbash_encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    int u_decmsg = strcmp("ABCDEFGHIJKLMNOPQRSTUVWXYZ", atbash_decrypt("ZYXWVUTSRQPONMLKJIHGFEDCBA"));
    int l_encmsg = strcmp("zyxwvutsrqponmlkjihgfedcba", atbash_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int l_decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", atbash_decrypt("zyxwvutsrqponmlkjihgfedcba"));

    return u_encmsg || u_decmsg || l_encmsg || l_decmsg;
}