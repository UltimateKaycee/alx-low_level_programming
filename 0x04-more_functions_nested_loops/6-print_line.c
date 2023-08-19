#include "main.h"

/**
 * print_line - function to draw a straight line
 * @nos: no of times underscore is output
 * Description: function only uses _putchar
 */
void print_line(int nos)
{
	int rooc;

	rooc = 0;
	
	while (rooc < nos)
	{
	_putchar(95);
	rooc++;
	
	}
	_putchar(10);
}
