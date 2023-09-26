#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function to count number
 * of unique nodes in looped listint_t list.
 * @head: pointer to head of the
 * listint_t to check.
 *
 * Return: 0 if list isn't looped
 * otherwise n of unique nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *drain, *card;

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
 * print_listint_safe - function to print
 * listint_t list
 * @head: pointer to head of listint_t
 *
 * Return: num of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);

	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);

	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
