#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Function to create a sorted hash table.
 * @size: size of sorted hash table.
 *
 * Return: NULL upon error, else
 *         a ptr to sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int run;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (run = 0; run < size; run++)
		ht->array[run] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Function to add element to sorted hash table.
 * @ht: ptr to sorted hash table.
 * @key: key to add.
 * @value: value of key.
 *
 * Return: 0 if failed, else 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *arrange;
	char *transfer;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	transfer = strdup(value);
	if (transfer == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	arrange = ht->shead;
	while (arrange)
	{
		if (strcmp(arrange->key, key) == 0)
		{
			free(arrange->value);
			arrange->value = transfer;
			return (1);
		}
		arrange = arrange->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(transfer);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(transfer);
		free(new);
		return (0);
	}
	new->value = transfer;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		arrange = ht->shead;
		while (arrange->snext != NULL && strcmp(arrange->snext->key, key) < 0)
			arrange = arrange->snext;
		new->sprev = arrange;
		new->snext = arrange->snext;
		if (arrange->snext == NULL)
			ht->stail = new;
		else
			arrange->snext->sprev = new;
		arrange->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Function to retrieve value of
 *                   key in sorted hash table.
 * @ht: ptr to sorted hash table.
 * @key: The key.
 *
 * Return: NULL if key don't match value, else,
 *         value of key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Function to print sorted hash table in order.
 * @ht: ptr to sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function to print sorted hash table in reverse.
 * @ht: ptr to sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Function to delete sorted hash table.
 * @ht: ptr to sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *neck;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		neck = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = neck;
	}

	free(head->array);
	free(head);
}
