#include "lists.h"

/**
 * * delete_dnodeint_at_index- delete at index
 * * @head: pointer to the list
 * * @index: position
 * * Return: 1 for success or -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;

	if (!*head || !(*head)->next)
	{
		return (-1);
	}
	tmp = *head;

	if (index == 0)
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	else
	{
		while (index > 0)
		{
			tmp = tmp->next;
			index--;
		}
		tmp2 = tmp->prev;
		tmp2->next = tmp->next;
		tmp->next->prev = tmp2;
		free(tmp);
		return (1);
	}
	return (-1);
}
