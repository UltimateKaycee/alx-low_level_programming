include "main.h"
/**
 * binary_to_uint - function to converts
 * binary number to an unsigned int.
 * @b: pointer to string of zero (0) and
 * one (1) chars.
 *
 * Return: 0 if b is NULL or contains
 * chars not 0 or 1
 * Otherwise - the number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, fab = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * fab;
		fab *= 2;
	}

	return (number);
}
