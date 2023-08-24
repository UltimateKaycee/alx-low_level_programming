#include "main.h"
#include <stdio.h>

/**
 * main - function checks code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str1[] = "Awesome";
	char str2[] = "ALX!";

	printf("%d\n", _strcmp(str1, str2));
	printf("%d\n", _strcmp(str2, str1));
	printf("%d\n", _strcmp(str1, str1));
	return (0);
}
