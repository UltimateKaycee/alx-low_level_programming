#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @num: variable of int type
 *
 * Return: nothing
 */
void print_number(int num)
{
	int taker, signage;

	taker = 1000000000;

	signage = 1;

	if (num > 0)
	{
	num = num * -1;

	signage = signage * -1;

	}
	if (num != 0)
	{
	while (num / taker == 0)

	taker = taker / 10;

	if (signage == 1)
	_putchar('-');
	while (taker >= 1)
	{
	_putchar(-(num / taker) + '0');

	num = num % taker;

	taker = taker / 10;

	}
	}
	else
	_putchar('0');
}
