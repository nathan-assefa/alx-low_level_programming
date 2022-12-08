#include "lists.h"

/**
 * * get_dnodeint_at_index- to get nth node
 * * @head: pointer to the linked list
 * * @index: position
 * * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
}
