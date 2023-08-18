#include "main.h"

/**
 *_isupper - This is a function that checks
 * for uppercase characters
 * @rooc: variable to store letters
 * Return: a value of 1 if the variable rooc
 * contains an uppercase letter.
 */
int _isupper(int rooc)
{
	if (rooc >= 'A' && rooc <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
