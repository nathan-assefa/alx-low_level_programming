#include "hash_tables.h"

/**
 * * hash_table_get- to get item's value at sepecific position
 * * @ht: hash table
 * * @key: key value of item
 * * Return: Gotten value or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = hash_djb2((unsigned char *)key);

	for (idx = 0; idx < ht->size; idx++)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
	}
	return (NULL);
}