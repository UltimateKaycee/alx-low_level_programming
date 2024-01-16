#include "main.h"

char *_strncpy(char *dest, char *src, int n) {
    char *my_place = dest;

    while (n-- > 0 && *src != '\0') {
        *dest++ = *src++;
    }

    while (n-- > 0) {
        *dest++ = '\0';
    }

    return my_place;
}
