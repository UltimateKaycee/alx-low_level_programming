#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - function to search for integer
  * @array: pointer to array
  * @size: size of array
  * @cmp: pointer to function
  * Return: index of first encoumtered element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;

	if (size <= 0 || !(array) || !(cmp))
	return (-1);
	while (++i < size)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
