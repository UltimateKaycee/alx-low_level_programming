#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new
 * node to a listint_t list at a given position.
 * @head: pointer to the address of the
 * head of the listint_t list.
 * @idx: index of listint_t list where new node
 * will be added - indix begins from 0.
 * @n: integer that will be in new node
 *
 * Return: NULL on failure
 * otherwise - address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh, *another = *head;

	unsigned int node;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
	return (NULL);

	fresh->n = n;

	if (idx == 0)
	{
	fresh->next = another;

	*head = fresh;

	return (fresh);
	}

	for (node = 0; node < (idx - 1); node++)
	{
	if (another == NULL || another->next == NULL)
	return (NULL);

	another = another->next;

	}

	fresh->next = another->next;

	another->next = fresh;

	return (fresh);
}
