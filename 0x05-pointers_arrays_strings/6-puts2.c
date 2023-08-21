#include "main.h"

/**
 * puts2 - a function that will print every other character
 * of a string starting with the first character followed by a new line.
 *
 * @words: char pointer variable
 *
 * Return: nothing
 */

void puts2(char *words)
{
	int nice, fine;

	for (nice = 0; words[nice] != '\0'; nice++)
	{
	;
	}
	for (nice = 0; fine < nice; fine += 2)
	{
	_putchar(words[fine]);
	}
	_putchar(10);
}
