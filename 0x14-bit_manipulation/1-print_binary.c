#include "main.h"
/**
  * print_binary - function to conv deci num to bin
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	int take, away;

	if (n == 0)
		_putchar('0');
	for (away = 0, take = sizeof(n) * 8 - 1; take >= 0; take--)
	{
		if ((n >> take) & 1)
		away = 1;
		if (away == 1)
			((n >> take) & 1) ? _putchar('1') : _putchar('0');
	}
}
