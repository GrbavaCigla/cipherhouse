#include <stdio.h>
#include <string.h>
#include <cipherhouse/bacon.h>

int main()
{
    int encmsg = strcmp("aaaaaaaaabaaabaaaabbaabaaaababaabbaaabbbabaaaabaabababaababbabbaaabbababbbaabbbbbaaaabaaabbaababaabbbabaabababbabbababbbbbaaabbaab", bacon_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", bacon_decrypt("aaaaaaaaabaaabaaaabbaabaaaababaabbaaabbbabaaaabaabababaababbabbaaabbababbbaabbbbbaaaabaaabbaababaabbbabaabababbabbababbbbbaaabbaab"));
    int encmsg = strcmp("aaaaaaaaabaaabaaaabbaabaaaababaabbaaabbbabaaaabaabababaababbabbaaabbababbbaabbbbbaaaabaaabbaababaabbbabaabababbabbababbbbbaaabbaab", bacon_encrypt("abcdefghijklmnopqrstuvwxyz"));
    int decmsg = strcmp("abcdefghijklmnopqrstuvwxyz", bacon_decrypt("aaaaaaaaabaaabaaaabbaabaaaababaabbaaabbbabaaaabaabababaababbabbaaabbababbbaabbbbbaaaabaaabbaababaabbbabaabababbabbababbbbbaaabbaab"));

    return decmsg || encmsg;
}