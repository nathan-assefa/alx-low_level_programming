#include "hash_tables.h"

/**
 * * hash_table_print- to print hash table
 * * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *item;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			item = ht->array[i];
			while (item)
			{
				if (comma++)
					printf(", ");
				printf("'%s': '%s'", item->key, item->value);

				item = item->next;
			}

		}
		printf("}\n");
	}
}
