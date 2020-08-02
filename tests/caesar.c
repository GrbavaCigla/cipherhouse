#include <stdio.h>
#include <string.h>
#include <cipherhouse/caesar.h>

int main()
{
    int encmsg = strcmp("ijklmnopqrstuvwxyzabcdefgh", caesar_encrypt("abcdefghijklmnopqrstuvwxyz", 8));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", caesar_decrypt("ijklmnopqrstuvwxyzabcdefgh", 8));
    return decmsg || encmsg;
}
