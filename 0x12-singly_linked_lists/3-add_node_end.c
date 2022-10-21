#include <stdio.h>
#include <stddef. h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 *_strlen- measures the length of a string
 *@s: pointer to a string
 *Return: size_t
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}

	return (len);
}

/**
 * *add_node_end - Adding node at the beginning of linked list
 * *@head: Double pointer to the linked list
 * *@str: string pointer
 * *Return: always list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->next = NULL;
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		tmp = *head;

		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = new_node;
	}

	return (new_node);
}
