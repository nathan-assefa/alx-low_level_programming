#include "hash_tables.h"

/**
 * * hash_table_create- Creating hash table
 * * @size: the size of items whithin the hash table
 * * Return: The newly creatd hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t) * size);
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
		return (NULL);

	return (new_hash);
}
