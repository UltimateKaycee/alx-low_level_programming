#include "main.h"

char *_strcpy(char *dest, char *src) {
    char *place = dest;

    while ((*dest++ = *src++) != '\0');

    return place;
}
