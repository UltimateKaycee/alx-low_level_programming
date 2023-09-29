#include "main.h"
/**
  * get_bit - function to get the value
  * of integer at a particular index
  * @n: long integer input
  * @index: what index to start from
  * Return: The value of the bit at the
  * particular index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
