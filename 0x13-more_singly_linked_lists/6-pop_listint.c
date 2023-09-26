#include "lists.h"

/**
 * pop_listint - function to delete the
 * head node of a listint_t list.
 * @head: pointer to address of the
 * head of the listint_t
 *
 * Return: 0 if link list is empty
 * otherwise - data in the head node (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *wait;
	int take;

	if (*head == NULL)
	return (0);

	wait = *head;
	take = (*head)->n;
	*head = (*head)->next;

	free(wait);

	return (take);
}
