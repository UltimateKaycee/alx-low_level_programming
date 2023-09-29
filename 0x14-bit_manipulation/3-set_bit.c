#include "main.h"
/**
  * set_bit - function to set bit at an index to 1
  * @n: ptr to the num
  * @index: The index to change
  * Return: On success - (1)
  * else on failure (-1)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
	return (-1);

	*n = *n | (1 << index);

	return (1);
}
