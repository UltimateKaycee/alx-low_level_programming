#include "lists.h"

/**
 * add_nodeint_end - function to add a new
 * node at the end of a listint_t list.
 * @head: pointer to address of the
 * head of the listint_t list.
 * @n: integer which the new node will contain.
 *
 * Return: NULL on failure
 * therwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *last;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
	return (NULL);

	fresh->n = n;

	fresh->next = NULL;

	if (*head == NULL)
	*head = fresh;

	else
	{
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = fresh;
	}

	return (*head);
}
