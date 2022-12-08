#include "lists.h"

/**
 * * insert_dnodeint_at_index- insert node at any position
 * * @h: pointer to linked list
 * * @idx: position
 * * @n: data
 * * Return: new linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tail, *tmp2;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	tail = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	while (idx > 1)
	{
		tail = tail->next;
		idx--;
	}
	if (tail->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = tail;
		tail->next = new_node;
		return (*h);
	}
	else
	{
		tmp2 = tail->next;
		new_node->next  = tmp2;
		new_node->prev = tail;
		tail->next  = new_node;
		tmp2->prev = new_node;
		return (*h);
	}
	return (NULL);
}
