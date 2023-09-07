#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function to allocats memory using malloc
 * @arc: size of buffer
 * Return: pointer to buffer
 */
void *malloc_checked(unsigned int arc)
{
	void *beef;

	beef = malloc(arc);

	if (beef == NULL)
	exit(98);
	return (beef);
}
