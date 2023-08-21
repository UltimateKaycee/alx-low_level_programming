#include "main.h"

/**
 * print_rev - function to print a string in reverse and a new line.
 * @brook: char pointer variable
 * Return: nothing.
 */

void print_rev(char *brook)
{
	int nice, fine;

	nice = 0;

	while (brook[nice] != '\0')
	{
	nice++;
	}
	fine = nice - 1;

	while (brook[fine])
	{
	_putchar(brook[fine]);

	fine--;
	}
	_putchar(10);
}
