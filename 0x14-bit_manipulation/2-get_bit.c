#include "main.h"
/**
  * get_bit - function to get value of
  * int at an index
  * @n: input long int
  * @index: starting index
  * Return: value of bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
