#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to print all
 * the elements of a list_t list.
 * @ann: The list_t list to be printed.
 *
 * Return: number of nodes in ann.
 */

size_t print_list(const list_t *ann)
{
	size_t nodes = 0;

	while (ann)
	{
	if (ann->str == NULL)
	printf("[0] (nil)\n");

	else
	printf("[%d] %s\n", h->len, h->str);

	nodes++;
	ann = ann->next;

	}

	return (nodes);
}
