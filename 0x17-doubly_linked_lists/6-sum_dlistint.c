#include "lists.h"

/**
 * sum_dlistint - To sum all data
 * in a dlistint_t list.
 * @head: head of dlistint_t list.
 *
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
