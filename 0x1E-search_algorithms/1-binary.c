#include "search_algos.h"

/**
  * binary_search - Function to search for value in sorted array
  *                 containing integers using binary search.
  * @array: ptr to first element of array.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL,
  *         else, index where value is located.
  *
  * Description: Will print out [sub]array being searched upon each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t start, up, down;

	if (array == NULL)
		return (-1);

	for (up = 0, down = size - 1; down >= up;)
	{
		printf("Searching in array: ");
		for (start = up; start < down; start++)
			printf("%d, ", array[start]);
		printf("%d\n", array[start]);

		start = up + (down - up) / 2;
		if (array[start] == value)
			return (start);
		if (array[start] > value)
			down = start - 1;
		else
			up = start + 1;
	}

	return (-1);
}
