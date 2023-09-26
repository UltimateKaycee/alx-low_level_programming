#include "lists.h"

/**
 * sum_listint - function to calculate
 * sum of all the data (n)
 * of a listint_t list.
 * @head: pointer to head
 * of the listint_t list.
 *
 * Return: 0 if the list is empty
 * otherwise - sum of all data (n).
 */
int sum_listint(listint_t *head)
{
	int all = 0;

	while (head)
	{
	all += head->n;

	head = head->next;
	}

	return (all);
}
