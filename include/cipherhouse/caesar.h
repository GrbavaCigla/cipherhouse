#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once

unsigned char* caesar_encrypt(const char* text, int n);
unsigned char* caesar_decrypt(const char* text, int n);
unsigned char* caesar_n_encrypt(const char* text, size_t textlen, int n);
unsigned char* caesar_n_decrypt(const char* text, size_t textlen, int n);
