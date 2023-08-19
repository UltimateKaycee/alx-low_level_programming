#include "main.h"

/**
 * print_most_numbers - function prints
 * numbers from 0 to 9, followed by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	int bright;

	for (bright = 48; bright < 58; bright++)
	{
	if (bright != 50 && bright != 52)
	{
	_putchar(bright);
	}
	}
	_putchar(10);
}
