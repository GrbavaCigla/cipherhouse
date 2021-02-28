#include <stdio.h>
#include <string.h>
#include <cipherhouse/caesar.h>

int main()
{
    int u_encmsg = strcmp("IJKLMNOPQRSTUVWXYZABCDEFGH", caesar_encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 8));
    int u_decmsg = strcmp("ABCDEFGHIJKLMNOPQRSTUVWXYZ", caesar_decrypt("IJKLMNOPQRSTUVWXYZABCDEFGH", 8));
    int l_encmsg = strcmp("ijklmnopqrstuvwxyzabcdefgh", caesar_encrypt("abcdefghijklmnopqrstuvwxyz", 8));
    int l_decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", caesar_decrypt("ijklmnopqrstuvwxyzabcdefgh", 8));
    return u_encmsg || u_decmsg || l_encmsg || l_decmsg;
}
