#include "search_algos.h"

/**
 * linear_search - Function to search for value in an array
 * containing integers using Linear search algorithm
 *
 * @array: array input
 * @size: size of array
 * @value: value to be searched for
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int start;

	if (array == NULL)
		return (-1);

	for (start = 0; start < (int)size; start++)
	{
		printf("Value checked array[%u] = [%d]\n", start, array[start]);
		if (value == array[start])
			return (start);
	}
	return (-1);
}
