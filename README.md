# cipherhouse
C library for ciphers and encoders.

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
#include <cipherhouse/atbash>
```

Then encode your string:
```c
#include <stdio.h>

int main(){
  printf("%s", atbash_encrypt("atbashcipher"));
}
```
## API
Every algorithm has `encrypt` and `decrypt` function, no matter if it is encoding (example: base64)or only has encrypt (example: atbash), this is done because I want api to be consitant and easy to use

## License
This project is licensed under GPLv3

## Credit
vendor/[b64](https://github.com/littlstar/b64.c) - Base64 library
