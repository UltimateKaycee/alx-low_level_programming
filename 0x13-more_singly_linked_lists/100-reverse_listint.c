#include "lists.h"

/**
 * reverse_listint - function to reverse listint_t list.
 * @head: ptr to address of
 * head of the list_t
 *
 * Return: ptr to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
	return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
	front = (*head)->next;

	(*head)->next = behind;

	back = *head;

	*head = front;
	}

	(*head)->next = back;

	return (*head);
}
