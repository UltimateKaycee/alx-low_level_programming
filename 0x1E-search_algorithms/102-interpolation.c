#include "search_algos.h"

/**
 * interpolation_search - Function to search for value in array of
 * containing integers using Interpolation search algorithm
 *
 * @array: The array input
 * @size: The size of array
 * @value: The value to search for
 * Return: The index of the value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double fund;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		fund = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + fund);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
