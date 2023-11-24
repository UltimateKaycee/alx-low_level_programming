#include "main.h"
/**
  * flip_bits - function to calc num of needed bits
  * to go from a num to another
  * @n: base num
  * @m: target num
  * Return: num of bit changes
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int fly, best;

	best = 0;
	for (fly = 8 * sizeof(n) - 1; fly >= 0; fly--)
		if (((n ^ m) >> fly) & 1)
			best++;
	return (best);
}
