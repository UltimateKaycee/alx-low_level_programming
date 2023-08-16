#include "main.h"
/**
* print_sign - prints the sign of a number
* @no: the int to check
* Return: 1 and prints + if no is greater than zero
* 0 and prints 0 if no is zero
* -1 and prints - if no is less than zero
*/
int print_sign(int no)
{
	if (no > 0)
	{
	_putchar('+');
	return (1);
	} else if (no == 0)
	{
	_putchar(48);
	return (0);
	} else if (no < 0)

	{
	_putchar('-');
	}
	return (-1);
}
