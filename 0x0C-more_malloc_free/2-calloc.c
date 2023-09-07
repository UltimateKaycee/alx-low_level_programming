#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array of a
 * certain number of elements each of an inputted byte size.
 * @numemby: number of elements.
 * @size: byte size of each array element.
 * Return: If numemby = 0, size = 0, or function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int numemby, unsigned int size)
{
	void *mem;

	char *filler;

	unsigned int index;

	if (numemby == 0 || size == 0)
	return (NULL);
	mem = malloc(size * numemby);

	if (mem == NULL)
	return (NULL);
	filler = mem;

	for (index = 0; index < (size * numemby); index++)
	filler[index] = '\0';

	return (mem);
}
