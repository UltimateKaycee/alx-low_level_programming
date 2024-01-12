#include "lists.h"

/**
 * add_dnodeint_end - To add new node at
 * ending of dlistint_t list.
 * @head: ptr to head of dlistint_t list.
 * @n: int for new node.
 *
 * Return: NULL if function fails.
 *         Otherwise, address of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *bring, *come;

	bring = malloc(sizeof(dlistint_t));
	if (bring == NULL)
		return (NULL);

	bring->n = n;
	bring->next = NULL;

	if (*head == NULL)
	{
		bring->prev = NULL;
		*head = bring;
		return (bring);
	}

	come = *head;
	while (come->next != NULL)
		come = come->next;
	come->next = bring;
	bring->prev = come;

	return (bring);
}
