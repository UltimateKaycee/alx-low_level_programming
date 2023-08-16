#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int ina, jar;

	ina = 0;

	while (ina < 24)
	{
	jar = 0;

	while (jar < 60)
	{
	_putchar((ina / 10) + '0');
	_putchar((ina % 10) + '0');
	_putchar(':');
	_putchar((jar / 10) + '0');
	_putchar((jar % 10) + '0');
	_putchar('\n');
	jar++;
	}
	ina++;
	}
}
