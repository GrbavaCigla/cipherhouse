# cipherhouse 
![build status](https://github.com/GrbavaCigla/cipherhouse/workflows/C/C++%20CI/badge.svg)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3911916cac264460a4b0ebaa82e7fa6c)](https://app.codacy.com/manual/GrbavaCigla/cipherhouse?utm_source=github.com&utm_medium=referral&utm_content=GrbavaCigla/cipherhouse&utm_campaign=Badge_Grade_Dashboard)

C library for ciphers and encoders.

## Support ciphers (and codes)
- affine
- atbash
- bacon
- caesar
- base64
- rot13
- vigenere

## Installation
```sh
git clone --recursive https://github.com/GrbavaCigla/cipherhouse.git
cd cipherhouse
mkdir build
cd build
cmake ..
make
make test
make install    # Not yet implemented
```
## Usage

First include cipher you want:
```c
#include <cipherhouse/atbash.h>
```

Then 'encrypt' your string:
```c
#include <stdio.h>

int main(){
  printf("%s", atbash_encrypt("atbashcipher"));
}
```
Non-terminated strings (WIP):
```c
#include <stdio.h>

int main(){
  char mystring[] = {'a', 'f', 'f', 'i', 'n', 'e', 'c', 'i', 'p', 'h', 'e', 'r'};
  printf("%s", atbash_n_encrypt(mystring, 12));
}
```

## Documentation
Every cipher has `encrypt` and `decrypt` function, no matter if it is encoding (example: base64) or only has encrypt (example: atbash), this is done because I want api to be consitant and easy to use.
List of functions:
```c
unsigned char *caesar_encrypt(const char *text, int n);
unsigned char *caesar_decrypt(const char *text, int n);
unsigned char *caesar_n_encrypt(const char *text, size_t textlen, int n);
unsigned char *caesar_n_decrypt(const char *text, size_t textlen, int n);
unsigned char *atbash_encrypt(char *text);
unsigned char *atbash_decrypt(char *text);
unsigned char *atbash_n_encrypt(char *text, size_t textlen);
unsigned char *atbash_n_decrypt(char *text, size_t textlen);
unsigned char *affine_encrypt(const char *text, int a, int b);
unsigned char *affine_decrypt(const char *text, int a, int b);
unsigned char *affine_n_encrypt(const char *text, size_t textlen, int a, int b);
unsigned char *affine_n_decrypt(const char *text, size_t textlen, int a, int b);
unsigned char *bacon_n_encrypt(const char *text, size_t textlen);
unsigned char *bacon_n_decrypt(const char *text, size_t textlen);
unsigned char *bacon_encrypt(const char *text);
unsigned char *bacon_decrypt(const char *text);
char *base64_encrypt(const char *text);
unsigned char *base64_decrypt(const char *text);
char *base64_n_encrypt(const char *text, size_t textlen);
unsigned char *base64_n_decrypt(const char *text, size_t textlen);
unsigned char *rot13_encrypt(const char *text);
unsigned char *rot13_decrypt(const char *text);
unsigned char *rot13_n_encrypt(const char *text, size_t textlen);
unsigned char *rot13_n_decrypt(const char *text, size_t textlen);

```

## License
This project is licensed under GPLv3

## Credit
vendor/[b64](https://github.com/littlstar/b64.c) - Base64 library
