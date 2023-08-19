#include "main.h"

/**
 * print_triangle - function to print right triangle, with the hash symbol
 * @size: triangle size
 */
void print_triangle(int size)
{
	int rooc, bright, dream;

	rooc = 0;

	bright = size - 1;

	while (rooc < size)
	{
	bright = size - 1 - rooc;
	dream = rooc + 1;
	while (bright > 0)
	{
	_putchar(32);
	bright--;

	}
	while (dream > 0)
	{
	_putchar('#');
	dream--;

	}
	_putchar(10);
	rooc++;

	}
	if (size <= 0)
	_putchar(10);
}
