#include "main.h"

/**
 *_isupper - This is a function that checks
 * for uppercase characters
 * @rood: variable to store letters
 * Return: a value of 1 if the variable rood
 * contains an uppercase letter.
 */
int _isupper(int rood)
{
	if (rood >= 'A' && rood <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
