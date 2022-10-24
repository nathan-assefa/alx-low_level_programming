#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index- This function returns nth number of node
 * @head: nth member of node
 * @index: position of node
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (head)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}
	return (head);
}
