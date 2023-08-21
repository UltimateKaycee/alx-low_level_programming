#include "main.h"

/**
 * puts_half - a function to print half of
 * a string followed by a new line
 *
 * @words: variable of char type
 *
 * Return: nothing
 */

void puts_half(char *words)
{
	int nice;

	for (nice = 0; words[nice] != '\0'; nice++)
	{
	;
	}
	if (nice % 2 != 0)
	{
	nice = (nice + 1) / 2;

	for (; words[nice] != '\0';)
	{
	_putchar(words[nice++]);
	}
	_putchar(10);
	}
	else if (nice % 2 == 0)
	{
	nice /= 2;

	for (; words[nice] != '\0';)
	{
	_putchar(words[nice++]);
	}
	_putchar(10);
	}
}
