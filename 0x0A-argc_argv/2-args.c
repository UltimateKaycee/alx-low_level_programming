#include <stdio.h>

/**
 * main - function to print all the arguments it receives.
 * @argc: number of arguments given to program.
 * @argv: array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);
	return (0);
}
