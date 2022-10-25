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
	listint_t *tmp, *new_node
	unsigned int i, len;

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
	len =  listint_len(*head);
	if (len == idx)
	{
		new_node->next = NULL;
		tmp->next = new_node;
		return (new_node);
	}
	else if (tmp == NULL || tmp->next == NULL)
	{
		return (NULL);
	}
	tmp->next = new_node;
	return (new_node);
}

/**
 * listint_len- mesures length of list
 * @h: member of list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
