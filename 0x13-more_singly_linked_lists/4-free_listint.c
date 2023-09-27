#include "lists.h"

/**
 * free_listint - function to free
 * listint_t list.
 *
 * @head: pointer to the head of
 * the listint_t list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *wait;

	while (head)
	{

	wait = head->next;

	free(head);
	head = wait;

	}
}
