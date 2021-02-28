#include "cipherhouse/bacon.h"

unsigned char* bacon_n_encrypt(const char* text, size_t textlen)
{
    char* encrypted = malloc(textlen * 5);

    for (int i = 0; i < (int)textlen; i++) {
        for (int j = 4; j >= 0; j--) {
            encrypted[4 - j + i * 5] = ((text[i] - 97) & (1 << j)) ? 'b' : 'a';
        }
    }
    return encrypted;
}

unsigned char* bacon_n_decrypt(const char* text, size_t textlen)
{
    char* decrypted = malloc(textlen / 5);

    for (int i = 0; i < (int)textlen; i++) {
        char temp[5];
        if (text[i] == 'a' || text[i] == 'A') {
            temp[i % 5] = '0';
        } else if (text[i] == 'b' || text[i] == 'B') {
            temp[i % 5] = '1';
        }

        if (i % 5 == 4) {
            decrypted[i / 5] = strtol(temp, 0, 2) + 97;
        }
    }

    return decrypted;
}

unsigned char* bacon_encrypt(const char* text)
{
    size_t textlen = strlen(text);
    return bacon_n_encrypt(text, textlen);
}

unsigned char* bacon_decrypt(const char* text)
{
    size_t textlen = strlen(text);
    return bacon_n_decrypt(text, textlen);
}