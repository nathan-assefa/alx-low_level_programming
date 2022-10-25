#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- Inserting at nth position
 * @head: nodes
 * @idx: position of nodes
 * @n: value
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	i = 1;
	while (tmp->next)
	{
		if (i == idx)
		{
			new_node->next = tmp->next;
			break;
		}
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
	{
		return (NULL);
	}
	tmp->next = new_node;
	return (new_node);
}
