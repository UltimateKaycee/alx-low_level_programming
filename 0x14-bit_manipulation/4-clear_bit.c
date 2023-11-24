#include "main.h"
/**
  * clear_bit - function to set bit at index to 0
  * @n: pointer to num
  * @index: the index
  * Return: 1 if success, -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
