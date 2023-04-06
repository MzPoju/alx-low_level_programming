#include "hash_tables.h"

/**
 * key_index - Get the index at which a key is stored in an array
 * @key: Key to get the index
 * @size: Size of the array of the hash table.
 * Return: Index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
