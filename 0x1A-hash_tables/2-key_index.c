#include "hash_tables.h"

/**
 * key_index - Function to get index where key/value pair is
 *             stored in an array of ht.
 * @key: The key to locate.
 * @size: size of array.
 *
 * Return: index of key.
 *
 * Description: Will utilize djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
