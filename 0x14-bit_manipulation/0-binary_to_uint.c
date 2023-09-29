#include "main.h"

/**
 * binary_to_uint - function to convert a bin num to an unsigned int.
 * @b: pointer to string of 0 and 1 characters.
 *
 * Return: 0 if  NULL or contains chars not 0 or 1
 * else the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dig = 0, dug = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		dig += (b[length] - '0') * dug;
		dug *= 2;
	}

	return (dig);
}
