#include "lists.h"

/**
 * add_nodeint - function to add node
 * at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @num: integer which new node will contain.
 *
 * Return: NULL - on fail
 * otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);

	new->num = num;

	new->next = *head;

	*head = new;

	return (new);
}
