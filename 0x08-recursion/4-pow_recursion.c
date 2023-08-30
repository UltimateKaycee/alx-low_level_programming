#include "holberton.h"

/**
 * _pow_recursion - function return value of x raised to power of y.
 * @bright: number to be raised.
 * @dark: power to raise.
 *
 * Return: value of bright raised to power of dark.
 */
int _pow_recursion(int bright, int dark)
{
	int result = bright;

	if (dark < 0)
	return (-1);
	else if (dark == 0)
	return (1);
	result *= _pow_recursion(bright, dark - 1);

	return (result);
}
