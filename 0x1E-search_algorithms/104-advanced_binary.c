#include "search_algos.h"

/**
 * rec_search - Function to search for value in array of
 * containing integers using Binary search algorithm
 *
 *
 * @array: The array input
 * @size: The size of array
 * @value: The value to search for
 * Return: The index of value
 */
int rec_search(int *array, size_t size, int value)
{
	size_t the_half = size / 2;
	size_t start;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (start = 0; start < size; start++)
		printf("%s %d", (start == 0) ? ":" : ",", array[start]);

	printf("\n");

	if (the_half && size % 2 == 0)
		the_half--;

	if (value == array[the_half])
	{
		if (the_half > 0)
			return (rec_search(array, the_half + 1, value));
		return ((int)the_half);
	}

	if (value < array[the_half])
		return (rec_search(array, the_half + 1, value));

	the_half++;
	return (rec_search(array + the_half, size - the_half, value) + the_half);
}

/**
 * advanced_binary - Function to call rec_search to return
 * index of the number
 *
 * @array: The array input
 * @size: The size of array
 * @value: The value to search for
 * Return: The index of the value
 */
int advanced_binary(int *array, size_t size, int value)
{
	int posi;

	posi = rec_search(array, size, value);

	if (posi >= 0 && array[posi] != value)
		return (-1);

	return (posi);
}
