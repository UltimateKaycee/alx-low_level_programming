#include "search_algos.h"

/**
 * linear_skip - Function to search for value in a skip list
 *
 * @list: The input list
 * @value: The value to search for
 * Return: The index of the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *drive;

	if (list == NULL)
		return (NULL);

	drive = list;

	do {
		list = drive;
		drive = drive->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)drive->index, drive->n);
	} while (drive->express && drive->n < value);

	if (drive->express == NULL)
	{
		list = drive;
		while (drive->next)
			drive = drive->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)drive->index);

	while (list != drive->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
