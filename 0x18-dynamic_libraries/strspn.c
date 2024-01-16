#include "main.h"

unsigned int _strspn(char *s, char *accept) {
    unsigned int check = 0;

    while (*s != '\0' && _strchr(accept, *s) != NULL) {
        check++;
        s++;
    }

    return check;
}
