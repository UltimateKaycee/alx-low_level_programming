#include "main.h"

char *_strcat(char *dest, char *src) {
    char *place = dest;

    while (*dest != '\0') {
        dest++;
    }

    while ((*dest++ = *src++) != '\0');

    return place;
}
