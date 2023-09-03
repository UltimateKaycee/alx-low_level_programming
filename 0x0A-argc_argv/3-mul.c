#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to prints multiplication
 * of 2 numbers, followed by a new line.
 * @argc: number of arguments given to program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 If program receives 2 arguments.
 * 1 If program does not receive 2 arguments
 */
int main(int argc, char *argv[])
{
	int first, second, third;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	first = atoi(argv[1]);

	second = atoi(argv[2]);

	third = first * second;

	printf("%d\n", third);
	return (0);
}
