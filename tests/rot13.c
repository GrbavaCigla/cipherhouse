#include <stdio.h>
#include <string.h>
#include <cipherhouse/rot13.h>

int main()
{
    int encmsg = strcmp("nopqrstuvwxyzabcdefghijklm", rot13_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", rot13_decrypt("nopqrstuvwxyzabcdefghijklm"));
    return decmsg || encmsg;
}
