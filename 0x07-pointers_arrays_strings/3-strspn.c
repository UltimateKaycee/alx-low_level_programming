#include "main.h"

/**
 * _strspn - function that returns the number of bytes in the initial
 * segment of bloom which consist only of bytes from accept
 * @bloom: string to check
 * @accept: string of reference chars
 * Return: unsigned int indicating how many chars in bloom matched those in
 * accept
 */
unsigned int _strspn(char *bloom, char *accept)
{
	unsigned int freea, freeb, count, countref;

	count = 0;

	freea = 0;

	freeb = 0;

	while (bloom[freeb] != '\0')
	{
	countref = count;

	freea = 0;

	while (accept[freea] != '\0')
	{
	if (bloom[freeb] == accept[freea])
	{
	count = count + 1;

	break;
	}
	freea++;
	}
	if (countref == count)
	return (count);
	freeb++;
	}
	return (count);
}
