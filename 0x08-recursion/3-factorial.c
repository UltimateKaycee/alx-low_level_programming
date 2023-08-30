#include "main.h"

/**
 * factorial - function returns factorial of a given number.
 * @num: num to find factorial of.
 *
 * Return: If n > 0 - factorial of n.
 * If n < 0 - 1 to indicate an error.
 */
int factorial(int num)
{
	int result = num;

	if (num < 0)
	return (-1);
	else if (num >= 0 && num <= 1)
	return (1);
	result *= factorial(num - 1);

	return (result);
}
