#include "hash_tables.h"

/**
 * * hash_table_print- to print hash table
 * * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j, i, comma = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
			}

		}
		printf("}\n");
	}
}
