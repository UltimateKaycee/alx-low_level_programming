#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node
 * at a given index of a listint_t list.
 * @head: pointer to the address of the
 * head of the listint_t list.
 * @index: index of the node to delete - indix
 * will begin from 0.
 *
 * Return: 1 on succesful deletion
 * -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *wait, *another = *head;

	unsigned int node;

	if (another == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;

	free(another);
	return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
	if (another->next == NULL)
	return (-1);

	another = another->next;

	}

	wait = another->next;

	another->next = wait->next;

	free(wait);
	return (1);
}
