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
	int index, noose, look, fore;

	if (array == NULL || size == 0)
		return (-1);

	noose = (int)sqrt((double)size);
	look = 0;
	fore = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		look++;
		fore = index;
		index = look * noose;
	} while (index < (int)size && array[index] < value);

	printf("Value located  between indexes [%d] and [%d]\n", fore, index);

	for (; fore <= index && fore < (int)size; fore++)
	{
		printf("Value checked array[%d] = [%d]\n", fore, array[fore]);
		if (array[fore] == value)
			return (fore);
	}

	return (-1);
}
