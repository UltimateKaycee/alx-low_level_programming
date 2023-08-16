#include "main.h"
/**
* print_times_table - function prints the n
* times table, starting with 0
* @n: no of the times table
*/
void print_times_table(int no)
{
	int ina, jar, kar;

	if (no >= 0 && no <= 15)
	{
	for (ina = 0; ina <= no; ina++)
	{
	for (jar = 0; jar <= no; jar++)
	{
	kar = jar * ina;
	
	if (jar == 0)
	{
	_putchar(kar + '0');
	}
	else if (kar < 10 && jar != 0)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(kar + '0');
	}
	else if (kar >= 10 && kar < 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((kar / 10) + '0');
	_putchar((kar % 10) + '0');
	}
	else if (kar >= 100)
	{
	_putchar(',');
	_putchar(' ');
	_putchar((kar / 100) + '0');
	_putchar(((kar / 10) % 10) + '0');
	_putchar((kar % 10) + '0');
	}
	}
	_putchar('\n');
	}
	}
}
