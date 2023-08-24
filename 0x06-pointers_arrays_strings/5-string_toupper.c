#include "main.h"

/**
 * string_toupper - function to change all lowercase letters to uppercase
 * @high: string variable
 * Return: high
 */

char *string_toupper(char *high)
{
	int nice;

	for (nice = 0; high[nice] != '\0'; nice++)
	{
	if (high[nice] > 96 && high[nice] < 123)
	{
	high[nice] -= 32;
	}
	}
	return (high);
}
