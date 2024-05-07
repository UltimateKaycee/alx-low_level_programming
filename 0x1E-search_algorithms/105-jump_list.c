#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Function to search for value in array of
 * integers using Jump search algorithm
 *
 * @list: The input list
 * @size: The size of array
 * @value: The value to search for
 * Return: The index of the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, look, noose;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	noose = (size_t)sqrt((double)size);
	index = 0;
	look = 0;

	do {
		prev = list;
		look++;
		index = look * noose;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
