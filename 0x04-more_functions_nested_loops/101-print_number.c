#include "main.h"

void print_integer(int depth);

/**
 * print_number - function to print integer.
 * @shallow: integer input
 * Return: Nothing
 */

void print_number(int shallow)
{
	if (shallow == 0)
	_putchar('0');
	else if (shallow < 0)
	{
	_putchar('-');
	print_integer(shallow * -1);
	}
	else
	print_integer(shallow);
}

/**
 * print_integer - function to print shallow
 * @depth: unsigned integer input
 * Return: Nothing
 */
void print_integer(int depth)
{
	unsigned int bright = 1000000000;

	for (; bright >= 1; bright /= 10)
	if (depth / bright != 0)
	{
	_putchar((depth / bright) % 10 + '0');
	}
}
