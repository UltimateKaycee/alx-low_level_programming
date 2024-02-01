#include "hash_tables.h"

/**
 * hash_table_print - Function to print a hash table.
 * @ht: ptr to hash table
 *
 * Description: Will print Key/value pairs in the order
 *              they are in array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int deep;
	unsigned char beep = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (deep = 0; deep < ht->size; deep++)
	{
		if (ht->array[deep] != NULL)
		{
			if (beep == 1)
				printf(", ");

			node = ht->array[deep];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			beep = 1;
		}
	}
	printf("}\n");
}
