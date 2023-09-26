#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function to return
 * number of elements
 * in a linked listint_t list.
 * @start: A pointer to the head of the listint_t list.
 *
 * Return: num of elements in the listint_t list.
 */
size_t listint_len(const listint_t *start)
{
	size_t nodes = 0;

	while (start)
	{
	nodes++;

	start = start->next;
	}

	return (nodes);
}
