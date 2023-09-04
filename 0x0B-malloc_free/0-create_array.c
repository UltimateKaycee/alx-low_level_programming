#include <stdlib.h>
/**
 * create_array - function to create and initialize
 * an array of chars with char c
 * @size: The size of the array
 * @c: character to initialize array with
 * Return: pointer to array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *q;

	unsigned int i;

	if (size > 0)
	{
	q = malloc(size * sizeof(char));
	if (q == NULL)
	return (NULL);
	}
	else
	return (NULL);
	for (i = 0; i < size; i++)
	q[i] = c;

	return (q);
}
