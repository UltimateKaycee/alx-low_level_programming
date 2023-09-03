#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints minimum number of
 * coins to make change for an amount of money
 * @argc: number of arguments given to program.
 * @argv: array of pointers to arguments.
 *
 * Return: 1 If number of arguments is not
 * exactly one Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int namt, change = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	namt = atoi(argv[1]);

	while (namt > 0)
	{
	change++;

	if ((namt - 25) >= 0)
	{
	namt -= 25;

	continue;

	}
	if ((namt - 10) >= 0)
	{
	namt -= 10;

	continue;

	}
	if ((namt - 5) >= 0)
	{
	namt -= 5;

	continue;

	}
	if ((namt - 2) >= 0)
	{
	namt -= 2;

	continue;

	}
	namt--;

	}
	printf("%d\n", change);
	return (0);
}
