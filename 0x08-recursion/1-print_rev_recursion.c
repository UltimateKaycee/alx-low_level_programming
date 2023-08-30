#include "main.h"

/**
 * _print_rev_recursion - function to prints string in reverse.
 * @str: string to be printed.
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
	_print_rev_recursion(str + 1);
	_putchar(*str);
	}
}
