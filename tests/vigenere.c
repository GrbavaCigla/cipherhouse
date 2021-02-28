#include <stdio.h>
#include <string.h>
#include <cipherhouse/vigenere.h>

int main()
{
    int u_encmsg = strcmp("TIGTYNIRJAYHZSCMZLEIMJRBPS", vigenere_encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG"));
    int u_decmsg = strcmp("ABCDEFGHIJKLMNOPQRSTUVWXYZ", vigenere_decrypt("TIGTYNIRJAYHZSCMZLEIMJRBPS", "THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG"));
    int l_encmsg = strcmp("tigtynirjayhzscmzleimjrbps", vigenere_encrypt("abcdefghijklmnopqrstuvwxyz", "thequickbrownfoxjumpsoverthelazydog"));
    int l_decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", vigenere_decrypt("tigtynirjayhzscmzleimjrbps", "thequickbrownfoxjumpsoverthelazydog"));

    return u_encmsg || u_decmsg || l_encmsg || l_decmsg;
}