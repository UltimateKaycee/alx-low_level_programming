#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table.
 * @size: size of array.
 *
 * Return: NULL if an error occurs or
 *         a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int run;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (run = 0; run < size; run++)
		ht->array[run] = NULL;

	return (ht);
}
