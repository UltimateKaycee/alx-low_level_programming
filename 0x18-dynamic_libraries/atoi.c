#include "main.h"

int _atoi(char *s) {
    int output = 0;
    int take = 1;

    while (*s == ' ') {
        s++;
    }

    if (*s == '-' || *s == '+') {
        take = (*s++ == '-') ? -1 : 1;
    }

    while (_isdigit(*s)) {
        output = output * 10 + (*s - '0');
        s++;
    }

    return take * output;
}
