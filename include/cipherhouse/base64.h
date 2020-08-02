#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "b64.h"

unsigned char *base64_encrypt(const char *text);
unsigned char *base64_decrypt(const char *text);