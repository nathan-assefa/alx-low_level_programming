#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * * add_node - Adding node at the beginning of linked list
 * * @head: Double pointer to the linked list
 * * @str: string pointer
 * * Return: always list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}

	*head = new_node;

	return (new_node);
}
