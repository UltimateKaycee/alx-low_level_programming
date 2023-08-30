#include "main.h"

/**
 * _puts_recursion - function to print a string
 * using recursion
 * @str: pointer to string to be printed
 * Return: nothing
 */
void _puts_recursion(char *str)
{
	if (*str == '\0')

	_putchar('\n');

	else if (*str != '\0')

	{

	_putchar(*str);

	str++;

	_puts_recursion(str);
	}
i
