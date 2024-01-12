#include "lists.h"

/**
 * get_dnodeint_at_index - To find node
 * in dlistint_t list.
 * @head: head of dlistint_t list.
 * @index: The node.
 *
 * Return: NULL if there' no node.
 *         Otherwise, address of node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
