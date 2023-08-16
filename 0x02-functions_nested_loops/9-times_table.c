#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* @ina: first element
* @jar: second element
* @kar: third element
*
* Return: Always 0 (success)
*/
void times_table(void)
{
	int ina, jar, kar;

	for (ina = 0; ina < 10; ina++)
	{
	for (jar = 0; jar < 10; jar++)
	{
	kar = jar * ina;
	if (jar == 0)
	{
	_putchar(kar + '0');
	}
	if (kar < 10 && jar != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(kar + '0');
	}
	else if (kar >= 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((kar / 10) + '0');
	_putchar((kar % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
