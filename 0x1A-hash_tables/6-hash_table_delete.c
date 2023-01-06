#include "hash_tables.h"

/**
 * * free_node- to free items
 * * @item: item to be freed
 */
void free_nodes(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * * hash_table_delete- to free hash table
 * * @ht: hash table to be freed
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash = ht->array[i];
			while (hash)
			{
				free_nodes(hash);
				hash = hash->next;
			}
	}

	free(ht->array);
	free(ht);

}
