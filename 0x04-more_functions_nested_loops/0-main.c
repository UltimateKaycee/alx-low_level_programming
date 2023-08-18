#include "main.h"
#include <stdio.h>

/**
 * main - checks code.
 * @rood: variable
 * Return: Always 0.
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
