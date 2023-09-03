#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints addition of positive numbers,
 * followed by a new line.
 * @argc: number of arguments given to program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 If one of the numbers contains symbols that are non-digits
 * Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int number, figure, total = 0;

	for (number = 1; number < argc; number++)
	{
	for (figure = 0; argv[number][figure]; figure++)
	{
	if (argv[number][figure] < '0' || argv[number][figure] > '9')
	{
	printf("Error\n");
	return (1);
	}
	}
	total += atoi(argv[number]);

	}
	printf("%d\n", total);
	return (0);
}
