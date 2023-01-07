#include "hash_tables.h"

/**
 * * hash_table_delete- To delete the hash table;
 * * @ht: the hash table to be removed
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *item;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		item = ht->array[idx];
		while (item)
		{
			free(item->key);
			free(item->value);
			free(item);
			item = item->next;
		}
	}

	free(ht->array);
	free(ht);

}
