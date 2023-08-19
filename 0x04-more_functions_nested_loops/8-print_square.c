#include "main.h"

/**
 * print_square - function outputs square
 * @size: square size
 * Description: function only uses _putchar. Uses hash symbol to
 * output square.
 */
void print_square(int size)
{
	int fes, les;

	les = 0;

	if (size < 1)
	_putchar('\n');
	while (les < size)
	{
	fes = 0;
	while (fes < size)
	{
	_putchar('#');
	fes++;
	}
	_putchar('\n');
	les++;
	}
}
