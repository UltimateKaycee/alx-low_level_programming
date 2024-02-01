#include "hash_tables.h"

/**
 * hash_table_delete - Function to delete a hash table.
 * @ht: ptr to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *arrange;
	unsigned long int go;

	for (go = 0; go < ht->size; go++)
	{
		if (ht->array[go] != NULL)
		{
			node = ht->array[go];
			while (node != NULL)
			{
				arrange = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = arrange;
			}
		}
	}
	free(head->array);
	free(head);
}
