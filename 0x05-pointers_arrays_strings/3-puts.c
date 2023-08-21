#include "main.h"

/**
 * _puts - a function to print a string followed by a new line, to the stdout.
 *
 * @words: pointer variable of char type
 *
 * Return: nothing
 */

void _puts(char *words)
{
	int take;

	for (take = 0; words[take] != '\0'; take++)
	{
	_putchar(words[take]);
	}
	_putchar(10);
}
