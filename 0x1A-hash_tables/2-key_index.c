#include "hash_tables.h"

/**
 * * key_index- To find the index where key maps the its value
 * * @key: the key the hash function takes as input
 * * @size: the size of the the array in the hash table
 * * Return: Index whereby the key and value are related
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x, i;

	x = hash_djb2(key);

	return (x % size);

}
