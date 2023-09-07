#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function to reallocate a memory block
 * @ptr: pointer to the original memory block
 * @os: old size of memory block
 * @ns: new size of memory block
 * Return: pointer to reallocated memory block
 */
void *_realloc(void *ptr, unsigned int os, unsigned int ns)
{
	char *arc, *castptr;

	unsigned int a;

	if (ptr != NULL && ns == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (ns == os)
	return (ptr);
	if (ptr == NULL)
	{
	arc = malloc(ns);
	return (arc);
	}
	if (ns > os)
	{
	arc = malloc(ns * sizeof(char));

	castptr = ptr;

	for (a = 0; a < os; a++)
	arc[a] = castptr[a];

	free(ptr);
	return (arc);
	}
	return (ptr);
}
