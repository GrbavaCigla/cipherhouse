#include <stddef.h>
#include <stdbool.h>
#include <malloc.h>
#include "cipherhouse/common.h"
#pragma once

unsigned char *playfair_key(const char *key, size_t keylen);

unsigned char *playfair_encrypt(const char *text, const char* key);