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
	int posi, noose, look, fore;

	if (array == NULL || size == 0)
		return (-1);

	noose = (int)sqrt((double)size);
	look = 0;
	fore = posi = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", posi, array[posi]);

		if (array[posi] == value)
			return (posi);
		look++;
		fore = posi;
		posi = look * noose;
	} while (posi < (int)size && array[posi] < value);

	printf("Value located  between indexes [%d] and [%d]\n", fore, posi);

	for (; fore <= posi && fore < (int)size; fore++)
	{
		printf("Value checked array[%d] = [%d]\n", fore, array[fore]);
		if (array[fore] == value)
			return (fore);
	}

	return (-1);
}
