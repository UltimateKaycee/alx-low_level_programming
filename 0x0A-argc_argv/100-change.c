#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments given to program
 * @argv: array of pointers to arguments
 *
 * Return: 1 If number of arguments is not
 * exactly one Otherwise 0
 */

int main(int argc, char *argv[])
{
	int namt, change = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}
	namt = atoi(argv[1]);

	while (namt > 0)
	{
	if (namt >= 25)
	namt -= 25;

	else if (namt >= 10)
	namt -= 10;

	else if (namt >= 5)
	namt -= 5;

	else if (namt >= 2)
	namt -= 2;

	else if (namt >= 1)
	namt -= 1;

	change += 1;

	}
	printf("%d\n", change);
	return (0);
}
