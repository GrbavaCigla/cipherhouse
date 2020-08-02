#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma once

unsigned char *affine_encrypt(const char *text, int a, int b);
unsigned char *affine_decrypt(const char *text, int a, int b);

unsigned char *affine_n_encrypt(const char *text, size_t textlen, int a, int b);
unsigned char *affine_n_decrypt(const char *text, size_t textlen, int a, int b);
