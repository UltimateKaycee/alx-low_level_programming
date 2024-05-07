#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function to search for value in array of
 * containing integers using Jump search algorithm
 *
 * @array: Array input
 * @size: The size of array
 * @value: The value to search for
 * Return: The index of number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, noose, look, prev;

	if (array == NULL || size == 0)
		return (-1);

	noose = (int)sqrt((double)size);
	look = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		look++;
		prev = index;
		index = look * noose;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
