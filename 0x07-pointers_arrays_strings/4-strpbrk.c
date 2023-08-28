#include "main.h"

/**
 * _strpbrk - function that locates first occurrence in a
 *  string of any bytes in a reference string
 * @bloom: pointer to string to be searched
 * @acce: pointer to reference string
 * Return: pointer bloom at address of first match or NULL.
 */
char *_strpbrk(char *bloom, char *acce)
{
	int freeb, freea;

	freeb = 0;

	while (bloom[freeb] != '\0')
	{
	freea = 0;

	while (acce[freea] != '\0')
	{
	if (bloom[freeb] == acce[freea])
	return (bloom + freeb);
	freea++;

	}
	freeb++;
	}
	return ('\0');
}
