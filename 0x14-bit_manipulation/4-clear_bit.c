#include "main.h"
/**
  * clear_bit - function to set a
  * bit at a particular index to 0
  * @n: ptr to the number
  * @index: The particular index to change
  * Return: On success - (1)
  * else on failure - (-1)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);

	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
