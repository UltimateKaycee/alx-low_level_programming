#include "main.h"

/**
 * print_diagonal - function draws diagonal line
 * @nos: number of times backslash char is output
 * Description: function only uses _putchar
 */
void print_diagonal(int nos)
{
	int rooc, bright;

	rooc = 0;

	while (nos > 0)
	{
	bright = rooc;
	while (bright > 0)
	{
	_putchar(32);

	bright--;
	}
	_putchar(92);
	_putchar(10);
	rooc++;
	nos--;
	}
	if (rooc < 1)
	_putchar(10);
}
