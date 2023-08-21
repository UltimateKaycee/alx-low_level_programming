#include "main.h"

/**
 * _strlen - a function to return lenght of a string.
 *
 * @brook: variable of char type
 *
 * Return: string length of a given string.
 */

int _strlen(char *brook)
{
	int shook;

	shook = 0;
	while (brook[shook] != '\0')
	{
	shook++;
	}
	return (shook);
}
