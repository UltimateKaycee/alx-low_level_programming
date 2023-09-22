#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - function finds the number
 * of nodes in a list
 * @ann: singly linked list
 * Return: number of elements in a
 * linked list
 */
size_t list_len(const list_t *ann)
{
	int bean;

	for (bean = 0; ann; bean++)
	ann = ann->next;

	return (bean);
}
