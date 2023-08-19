#include "main.h"

/**
 * print_numbers - function prints the numbers,
 * from 0 to 9, followed by a new line
 * Return: nothing
 */

void print_numbers(void)
{
	int bright;

	for (bright = 48; bright < 58; bright++)
	{
	_putchar(bright);
	}
	_putchar(10);
}
