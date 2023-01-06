#include "hash_tables.h"

/**
 * * hash_table_set- To set elements of hash table
 * * @ht: structure of hash table;
 * * @value: value of an item
 * * @key: key of an item
 * * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x, idx;
	static unsigned long int i;
	hash_node_t *new_item;

	if (strcmp(key, "") == 0)
		return (0);

	new_item = creat_items(key, value);
	if (new_item == NULL)
	{
		return (0);
	}

	idx = hash_djb2((unsigned char *)key);
	x = idx % ht->size;
	if (ht->array[x] == NULL)
	{
		if (i == ht->size)
		{
			return (0);
		}
		ht->array[x] = new_item;
		i++;
	}
	else
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			ht->array[x]->value = (char *)value;
		}

		else
		{
			handle_collision(ht, new_item, x);
		}
	}
	return (1);
}

/**
 * * handle_collision- to handle collision
 * * @ht: The hash table
 * * @item: item to be added
 * * @index: position in which collision occurs
 */
void handle_collision(hash_table_t *ht, hash_node_t *item, unsigned long index)
{
	item->next = ht->array[index];
	ht->array[index] = item;
}

/**
 * * creat_items- To creat new items
 * * @key: The key to be added in the item
 * * @value: value of the itme
 * * Return: new item
 */
hash_node_t *creat_items(const char *key, const char *value)
{
	hash_node_t *new_item;

	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (NULL);
	new_item->key = malloc(strlen(key) + 1);
	if (new_item->key == NULL)
	{
		return (NULL);
	}
	new_item->value = malloc(strlen(value) + 1);
	if (new_item->value == NULL)
	{
		return (NULL);
	}
	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	new_item->next = NULL;

	return (new_item);
}
