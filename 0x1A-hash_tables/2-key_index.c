#include "hash_tables.h"

/**
 * key_index - Get index at which key/value pair should be st redo
 * @key: The key to get the index of
 * @size: size of array of the hash table
 *
 * Return: index of key
 *
 * Description: uses djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
