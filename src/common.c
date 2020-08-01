#include "cipherhouse/common.h"

int typetxt(char c)
{
    if ((int)c > 64 && (int)c < 91)
    {
        return -1;
    }
    else if ((int)c > 96 && (int)c < 123)
    {
        return 0;
    }
    return 1;
}
