#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - function to get length
 * of the string
 * @str: string
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int organ;

	for (organ = 0; str[organ]; organ++)
	;
	return (organ);
}

/**
 * _strdup - function for recreation of
 * string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with
 * copied string
 */
void *_strdup(const char *src)
{
	int len, organ;

	char *dest;

	len = _strlen(src);

	dest = malloc((len + 1) * sizeof(char));

	if (dest == NULL)
	return (NULL);
	for (organ = 0; src[organ]; organ++)
	dest[organ] = src[organ];

	dest[organ] = '\0';
	return (dest);
}

/**
 * add_node_end - function to add new nodes
 * to the end of the list
 * @head: current node (place) in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	char *dupstr;

	if (str == NULL)
	return (NULL);
	dupstr = _strdup(str);

	if (dupstr == NULL)
	return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);
	new->str = dupstr;

	new->len = _strlen(str);

	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;

	return (*head);
	}
	current = *head;

	while (current->next != NULL)
	current = current->next;

	current->next = new;

	return (*head);
}
