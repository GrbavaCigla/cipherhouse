#include <stdio.h>
#include <string.h>
#include <cipherhouse/base64.h>

int main()
{
    int encmsg = strcmp("YWJjZGVmZ2hpamtsbW5vcHFyc3R1dnd4eXo=", base64_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", base64_decrypt("YWJjZGVmZ2hpamtsbW5vcHFyc3R1dnd4eXo="));
    return decmsg || encmsg;
}