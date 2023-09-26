#include "lists.h"

/**
 * add_nodeint - function to add node
 * at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: integer which new node will contain.
 *
 * Return: NULL - on fail
 * otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
	return (NULL);

	fresh->n = n;

	fresh->next = *head;

	*head = fresh;

	return (fresh);
}
