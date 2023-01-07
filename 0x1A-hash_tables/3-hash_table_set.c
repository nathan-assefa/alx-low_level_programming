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
	hash_node_t *new_item, *head;

	if (!key || !value || !ht)
		return (0);

	idx = hash_djb2((unsigned char *)key);
	x = idx % ht->size;

	for (head = ht->array[x]; head != NULL; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = (char *)value;
			return (1);
		}
	}

	new_item = creat_items(key, value);
	if (new_item == NULL)
		return (0);

	new_item->next = ht->array[x];
	ht->array[x] = new_item;
	return (1);
}

/**
 * * creat_items- Creating new item
 * * @key: key of the new item
 * * @value: value of the item
 * * Return: new-created item
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
		free(new_item);
		return (NULL);
	}
	new_item->value = malloc(strlen(value) + 1);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (NULL);
	}
	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	new_item->next = NULL;

	return (new_item);
}
