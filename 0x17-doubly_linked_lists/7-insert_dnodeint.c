#include "lists.h"

/**
 * insert_dnodeint_at_index - To insert new
 * node in dlistint_t list at given position.
 *
 * @h: ptr to head of dlistint_t list.
 * @idx: position to insert node.
 * @n: int for new node.
 *
 * Return: NULL if function fails.
 *         Otherwise, address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tp = *h, *bring;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tp = tp->next;
		if (tp == NULL)
			return (NULL);
	}

	if (tp->next == NULL)
		return (add_dnodeint_end(h, n));

	bring = malloc(sizeof(dlistint_t));
	if (bring == NULL)
		return (NULL);

	bring->n = n;
	bring->prev = tp;
	bring->next = tp->next;
	tp->next->prev = bring;
	tp->next = bring;

	return (bring);
}
