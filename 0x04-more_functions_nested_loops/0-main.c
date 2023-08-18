#include "main.h"
#include <stdio.h>

/**
 * main - checks code.
 * @rooc: variable
 * Return: 1 if rood is uppercase and 0 otherwise.
 */
int main(void)
{
    char rooc;

    rooc = 'A';

    printf("%c: %d\n", rooc, _isupper(rooc));
    rooc = 'a';

    printf("%c: %d\n", rooc, _isupper(rooc));
    return (0);
}
