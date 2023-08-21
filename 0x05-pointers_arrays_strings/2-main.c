#include "main.h"
#include <stdio.h>

/**
 * main - function that checks code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *words;

    int length;

    words = "My first strlen!";

    length = _strlen(words);

    printf("%d\n", length);

    return (0);
}
