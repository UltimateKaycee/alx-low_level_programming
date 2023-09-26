#include "lists.h"

/**
 * get_nodeint_at_index - function to locate a
 * given node of a listint_t list.
 * @head: pointer to head of istint_t
 * @begin: index of node to locate - index
 * will begin from 0.
 *
 * Return: Null if node doesn't exist
 * Otherwise - located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int begin)
	
{
	unsigned int node;

	for (node = 0; node < begin; node++)
	{
	if (head == NULL)
	return (NULL);

	head = head->next;
	}

	return (head);
}
