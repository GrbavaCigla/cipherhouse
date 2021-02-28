#include <stdio.h>
#include <string.h>
#include <cipherhouse/rot13.h>

int main()
{
    int u_encmsg = strcmp("NOPQRSTUVWXYZABCDEFGHIJKLM", rot13_encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    int u_decmsg = strcmp("ABCDEFGHIJKLMNOPQRSTUVWXYZ", rot13_decrypt("NOPQRSTUVWXYZABCDEFGHIJKLM"));
    int l_encmsg = strcmp("nopqrstuvwxyzabcdefghijklm", rot13_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int l_decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", rot13_decrypt("nopqrstuvwxyzabcdefghijklm"));
    return u_encmsg || u_decmsg || l_encmsg || l_decmsg;
}
