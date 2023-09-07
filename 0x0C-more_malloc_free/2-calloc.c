#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function to allocate memory for an
 * initialized buffer
 * @numemby: number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */
void *_calloc(unsigned int numemby, unsigned int size)
{
	int *arc;

	unsigned int a;

	if (numemby == 0 || size == 0)
	return (NULL);
	arc = malloc(size * numemby);

	if (arc == NULL)
	return (NULL);
	for (a = 0; a < numemby ; a++)
	arc[a] = 0;
	return (arc);
}
