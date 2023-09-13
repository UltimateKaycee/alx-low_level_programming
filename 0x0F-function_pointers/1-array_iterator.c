#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - function to run on each element of an array
  * @array: array
  * @size: size of array
  * @action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
	while (++i < size)
	action(array[i]);
	}
}
