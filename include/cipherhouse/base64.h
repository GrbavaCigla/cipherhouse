#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "b64.h"
#pragma once

char *base64_encrypt(const char *text);
unsigned char *base64_decrypt(const char *text);
char *base64_n_encrypt(const char *text, size_t textlen);
unsigned char *base64_n_decrypt(const char *text, size_t textlen);
