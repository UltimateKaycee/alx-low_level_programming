#include "main.h"
/**
* largest_number - function returns the largest
* of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number of 3
*/

int largest_number(int daa, int bee, int cat)
{
	int largest;

	if (daa >= bee && daa >= cat)
	{
	largest = daa;

	}
	else if (bee >= daa && bee >= cat)
	{

	largest = bee;
	}
	else if (cat >= daa && cat >= bee)
	{

	largest = cat;

	}
	return (largest);
}
