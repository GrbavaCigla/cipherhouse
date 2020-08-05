#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once

unsigned char *rot13_encrypt(const char *text);
unsigned char *rot13_decrypt(const char *text);
unsigned char *rot13_n_encrypt(const char *text, size_t textlen);
unsigned char *rot13_n_decrypt(const char *text, size_t textlen);
