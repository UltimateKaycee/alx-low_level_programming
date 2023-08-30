#include "main.h"

/**
 * _puts_recursion - function print a string, followed by a new line.
 * @str: string to be printed.
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
	_putchar(*str);
	_puts_recursion(str + 1);
	}
	else
	_putchar('\n');
}
