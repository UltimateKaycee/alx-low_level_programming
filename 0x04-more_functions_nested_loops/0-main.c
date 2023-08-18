#include "main.h"
#include <stdio.h>

/**
 * main - checks code.
 * @rood: variable
 * Return: 1 if rood is uppercase and 0 otherwise.
 */
int main(void)
{
    char rood;

    rood = 'A';

    printf("%c: %d\n", rood, _isupper(rood));
    rood = 'a';

    printf("%c: %d\n", rood, _isupper(rood));
    return (0);
}
