#include "lists.h"

/**
 * add_dnodeint - To add new node at
 * start of dlistint_t list.
 * @head: ptr to head of dlistint_t list.
 * @n: int for new node.
 *
 * Return: NUL if the function fails.
 *         Otherwise, address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *bring;

	bring = malloc(sizeof(dlistint_t));
	if (bring == NULL)
		return (NULL);

	bring->n = n;
	bring->prev = NULL;
	bring->next = *head;
	if (*head != NULL)
		(*head)->prev = bring;
	*head = bring;

	return (bring);
}
