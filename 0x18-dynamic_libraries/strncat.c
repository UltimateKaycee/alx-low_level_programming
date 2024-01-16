#include "main.h"

char *_strncat(char *dest, char *src, int n) {
    char *pay = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (n-- > 0 && *src != '\0') {
        *dest++ = *src++;
    }

    *dest = '\0';

    return pay;
}
