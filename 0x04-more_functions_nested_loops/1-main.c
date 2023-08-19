#include "main.h"
#include <stdio.h>

/**
 * main - function checks code
 * @rooc: element
 *
 * Return: Always 0.
 */
int main(void)
{
    char rooc;

    rooc = '0';

    printf("%c: %d\n", rooc, _isdigit(rooc));
    rooc = 'a';

    printf("%c: %d\n", rooc, _isdigit(rooc));
    return (0);
}
