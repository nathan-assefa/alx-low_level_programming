#include "hash_tables.h"

/**
 * * hash_table_get- to get item's value at sepecific position
 * * @ht: hash table
 * * @key: key value of item
 * * Return: Gotten value or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, x;
	hash_node_t *item;

	if (!ht || !key || !*key)
	{
		return (NULL);
	}

	x = hash_djb2((unsigned char *)key);
	idx = x % ht->size;

	for (idx = 0; idx < ht->size; idx++)
	{
		item = ht->array[idx]
		while (item)
		{
			if (strcmp(ht->item->key, key) == 0)
				return (item->value);
			item = item->next;
		}
	}
	return (NULL);
}
