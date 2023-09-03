#include <stdio.h>

/**
 * main - function prints number of arguments passed to it.
 * @argc: number of arguments given to function.
 * @argv: array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
