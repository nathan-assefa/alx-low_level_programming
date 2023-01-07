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
	char *new_value;

	if (!key || !value || !ht)
		return (0);

	idx = hash_djb2((unsigned char *)key);
	x = idx % ht->size;

	for (head = ht->array[x]; head != NULL; head = head->next)
	{
		if (strcmp(head->key, key) == 0)
		{
			new_value = malloc(strlen(value) + 1);
			if (new_value == NULL)
				return (0);
			free(head->value);
			strcpy(new_value, value);
			head->value = new_value;
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
	hash_node_t *node;

	node = calloc(1, sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	return (node);
}
