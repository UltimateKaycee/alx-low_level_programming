#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - function to print all elements
  * of a list_t list
  * @ann: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *ann)
{
	size_t bean;

	for (bean = 0; ann; bean++)
	{
	printf("[%d] %s\n", ann->len, ann->str);
		ann = ann->next;
	}
	return (bean);
}
