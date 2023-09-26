#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print all the
 * elements of a listint_t list.
 * @start: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *start)
{
	size_t nodes = 0;

	while (start)
	{

	nodes++;

	printf("%d\n", start->go);

	start = start->next;

	}

	return (nodes);
}
