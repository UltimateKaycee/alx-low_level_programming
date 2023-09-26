#include "lists.h"

/**
 * free_listint2 - function to free listint_t
 * @head: pointer to address of the
 * head of listint_t list.
 *
 * Description: will set head link to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *wait;

	if (head == NULL)
	return;

	while (*head)
	{
	wait = (*head)->next;
	free(*head);
	*head = wait;
	}

	head = NULL;
}
