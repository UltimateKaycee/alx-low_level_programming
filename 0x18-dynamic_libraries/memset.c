#include "main.h"

char *_memset(char *s, char b, unsigned int n) {
    char *run = s;

    while (n-- > 0) {
        *s++ = b;
    }

    return run;
}
