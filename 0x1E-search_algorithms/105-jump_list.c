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
	size_t posi, look, noose;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	noose = (size_t)sqrt((double)size);
	posi = 0;
	look = 0;

	do {
		prev = list;
		look++;
		posi = look * noose;

		while (list->next && list->posi < posi)
			list = list->next;

		if (list->next == NULL && posi != list->posi)
			posi = list->posi;

		printf("Value checked at index [%d] = [%d]\n", (int)posi, list->n);

	} while (posi < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->posi, (int)list->posi);

	for (; prev && prev->posi <= list->posi; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->posi, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
