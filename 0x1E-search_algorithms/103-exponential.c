#include "search_algos.h"

/**
  * _binary_search - Function to Search for value in sorted array
  *                  containing integers using binary search.
  * @array: ptr to first element of array.
  * @left: Start index of [sub]array to search.
  * @right: End index of [sub]array to search.
  * @value: Value to search for.
  *
  * Return: -1 if the value is not present or array is NULL,
  *         Else, index where value is found.
  *
  * Description: Will print [sub]array being searched upon each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t start;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (start = left; start < right; start++)
			printf("%d, ", array[start]);
		printf("%d\n", array[start]);

		start = left + (right - left) / 2;
		if (array[start] == value)
			return (start);
		if (array[start] > value)
			right = start - 1;
		else
			left = start + 1;
	}

	return (-1);
}

/**
  * exponential_search - Function to search for value in sorted array
  *                      containing integers using exponential search.
  * @array: ptr to first element of array.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: -1 if value is not present or array is NULL,
  *         else,the index where value is found.
  *
  * Description: Will print value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t start = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (start = 1; start < size && array[start] <= value; start = start * 2)
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	right = start < size ? start : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start / 2, right);
	return (_binary_search(array, start / 2, right, value));
}
