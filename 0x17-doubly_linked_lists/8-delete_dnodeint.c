#include "lists.h"

/**
 * delete_dnodeint_at_index - To remove node from
 * a dlistint_t at given index.
 *
 * @head: ptr to head of dlistint_t.
 * @index: index of this node.
 *
 * Return: 1, if successful.
 *         Otherwise, -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tp == NULL)
			return (-1);
		tp = tp->next;
	}

	if (tp == *head)
	{
		*head = tp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tp->prev->next = tp->next;
		if (tp->next != NULL)
			tp->next->prev = tp->prev;
	}

	free(tp);
	return (1);
}
