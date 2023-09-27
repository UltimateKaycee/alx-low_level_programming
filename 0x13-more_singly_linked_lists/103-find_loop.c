#include "lists.h"

/**
 * find_listint_loop - function to find the loop
 * in a listint_t linked list.
 * @head: A ptr to the head of listint_t
 *
 * Return: NULL if there isn't a loop.
 * else - address of node beginning the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bang, *dive;

	if (head == NULL || head->next == NULL)
	return (NULL);

	bang = head->next;

	dive = (head->next)->next;

	while (dive)
	{
	if (bang == dive)
	{
	bang = head;

	while (bang != dive)
	{
	bang = bang->next;

	dive = dive->next;

	}

	return (bang);
	}

	bang = bang->next;

	dive = (dive->next)->next;

	}

	return (NULL);
}
