#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once

unsigned char *atbash_encrypt(char *text);
unsigned char *atbash_decrypt(char *text);
unsigned char *atbash_n_encrypt(char *text, size_t textlen);
unsigned char *atbash_n_decrypt(char *text, size_t textlen);
