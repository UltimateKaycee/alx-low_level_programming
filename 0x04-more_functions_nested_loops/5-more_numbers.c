#include "main.h"

/**
 * more_numbers - function prints 10 times
 * the numbers from 0 to 14
 * Description: This functions only uses _putchar 3 times
 */
void more_numbers(void)
{
	int rooc, bright;

	rooc = 0;

	while (rooc < 10)
	{
	bright = 0;
	while (bright < 15)
	{
	if (bright > 9)
	_putchar(bright / 10 + '0');

	_putchar(bright % 10 + '0');
	bright++;
	}
	rooc++;
	_putchar('\n');
	}
}
