#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma once

char *affine_encrypt(char *text, int a, int b);
char *affine_decrypt(char *text, int a, int b);
