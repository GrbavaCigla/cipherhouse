#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once

unsigned char* vigenere_encrypt(const char* text, const char* key);
unsigned char* vigenere_decrypt(const char* text, const char* key);
unsigned char* vigenere_n_decrypt(const char* text, const char* key, size_t textlen, size_t keylen);
unsigned char* vigenere_n_encrypt(const char* text, const char* key, size_t textlen, size_t keylen);
