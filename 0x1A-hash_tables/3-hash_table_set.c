#include "hash_tables.h"

/**
 * hash_table_set - Function to add element in a hash table.
 * @ht: ptr to hash table.
 * @key: key to add.
 * @value: value of key.
 *
 * Return: 0 if failed and else 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set;
	char *transfer;
	unsigned long int index, run;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	transfer = strdup(value);
	if (transfer == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (run = index; ht->array[run]; run++)
	{
		if (strcmp(ht->array[run]->key, key) == 0)
		{
			free(ht->array[run]->value);
			ht->array[run]->value = transfer;
			return (1);
		}
	}

	set = malloc(sizeof(hash_node_t));
	if (set == NULL)
	{
		free(transfer);
		return (0);
	}
	set->key = strdup(key);
	if (set->key == NULL)
	{
		free(set);
		return (0);
	}
	set->value = transfer;
	set->next = ht->array[index];
	ht->array[index] = set;

	return (1);
}
