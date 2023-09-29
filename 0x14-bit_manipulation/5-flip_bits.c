#include "main.h"
/**
  * flip_bits - A function to calculate number
  * of bits required to go from one 
  * number to another number
  * @n: base num
  * @m: num to change into
  * Return: number of bit transformations required
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int chase, take;

	take = 0;

	for (chase = 8 * sizeof(n) - 1; chase >= 0; chase--)
	if (((n ^ m) >> chase) & 1)
	take++;
	return (take);
}
