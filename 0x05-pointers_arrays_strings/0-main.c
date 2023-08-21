#include "main.h"
#include <stdio.h>

/**
 * main - function for checking code
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	number = 402;

	printf("n=%d\n", number);
	reset_to_98(&number);
	printf("n=%d\n", number);
	return (0);
}
