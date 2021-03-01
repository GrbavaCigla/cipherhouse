#include "cipherhouse/playfair.h"

unsigned char *playfair_key(const char *key, size_t keylen)
{
    bool used[26] = {false};

    char *fkey = malloc(26);

    unsigned int current_fkey_pos = 0;
    for (int i = 0; i < (int)keylen; i++)
    {
        char x = key[i];
        int typet = typetxt(x);
        if (typet != 1)
        {
            int offset = typet == 0 ? 'a' : 'A';

            if (!used[x - offset])
            {
                if (x - offset == 'i' - 'a')
                {
                    used['j' - 'a'] = true;
                }

                used[x - offset] = true;
                fkey[current_fkey_pos] = x - offset + 'A';
                current_fkey_pos++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!used[i])
        {
            fkey[current_fkey_pos] = i + 'A';
            current_fkey_pos++;
        }
    }

    return fkey;
}

unsigned char *playfair_encrypt(const char *text, const char* key) {
    
}