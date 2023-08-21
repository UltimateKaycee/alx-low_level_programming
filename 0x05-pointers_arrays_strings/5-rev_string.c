#include "main.h"

/**
 * rev_string - a function that would reverse a string.
 *
 * @brook: char pointer variable
 *
 * Return: nothing
 */

void rev_string(char *brook)
{
	int nice, fine;

	char shook;

	nice = 0;

	while (brook[nice] != '\0')
	{
	nice++;
	}
	fine = nice - 1;

	nice = 0;

	while (nice < fine)
	{
	shook = brook[fine];

	brook[fine] = brook[nice];

	brook[nice] = shook;

	nice++;

	fine--;
	}
}
