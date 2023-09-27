#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - function to count num of unique
 * nodes in a looped listint_t linked list.
 * @head: ptr to head of listint_t to check.
 *
 * Return: 0 if list isn't looped
 * else num of unique nodes in list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *drain, *card;

	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	drain = head->next;
	
	card = (head->next)->next;

	while (card)
	{
	if (drain == card)
	{
	drain = head;

	while (drain != card)
	{
	nodes++;
	drain = drain->next;

	card = card->next;

	}

	drain = drain->next;

	while (drain != card)
	{
	nodes++;

	drain = drain->next;

	}

	return (nodes);
	}

	drain = drain->next;

	card = (card->next)->next;

	}

	return (0);
}

/**
 * free_listint_safe - function to free a listint_t list
 * safely - can free lists containing loops)
 * @h: pointer to the address of
 * the head of listint_t
 *
 * Return: size of the freed list
 *
 * Description: function will set head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *wait;

	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
	for (; h != NULL && *h != NULL; nodes++)
	{
	wait = (*h)->next;

	free(*h);

	*h = wait;

	}
	}

	else
	{
	for (index = 0; index < nodes; index++)
	{
	wait = (*h)->next;

	free(*h);

	*h = wait;

	}

	*h = NULL;

	}

	h = NULL;

	return (nodes);
}
