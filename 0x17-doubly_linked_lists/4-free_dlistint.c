#include "lists.h"

/**
 * free_dlistint - To free linked dlistint_t list.
 * @head: head of dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
