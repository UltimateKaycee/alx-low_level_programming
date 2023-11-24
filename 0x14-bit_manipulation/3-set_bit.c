#include "main.h"
/**
  * set_bit - function to set val of bit at
  * index to 1
  * @n: pointer to num
  * @index: the index
  * Return: 1 if successful, -1 if failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
