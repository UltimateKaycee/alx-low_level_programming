#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @no: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int no)
{
	int a;
	
	if (no < 0)
	no = -no;
	a = no % 10;
	
	if (a < 0)
	a = -a;
	
	_putchar(a + '0');
	return (a);
}
