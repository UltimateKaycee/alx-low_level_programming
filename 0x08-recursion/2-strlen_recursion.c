#include "main.h"

/**
 * _strlen_recursion - function returns length of a string.
 * @str: The string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *str)
{
	int len = 0;

	if (*str)
	{
	len++;

	len += _strlen_recursion(str + 1);
	}

	return (len);
}
