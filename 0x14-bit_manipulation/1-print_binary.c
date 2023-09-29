#include "main.h"
/**
 * print_binary - function to convert a
 * decimal number to binary number
 * @n: int to convert
 */
void print_binary(unsigned long int n)
{
	int tony, say;

	if (n == 0)
	_putchar('0');
	for (say = 0, tony = sizeof(n) * 8 - 1; tony >= 0; tony--)
	{
	if ((n >> tony) & 1)
	say = 1;

	if (say == 1)
	((n >> tony) & 1) ? _putchar('1') : _putchar('0');
	}
}
