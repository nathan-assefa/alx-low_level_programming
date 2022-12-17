#include "lists.h"

/**
 * * delete_dnodeint_at_index- delete at index
 * * @head: pointer to the list
 * * @index: position
 * * Return: 1 for success or -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!*head)
	{
		return (-1);
	}
	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (index > 0)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				return (-1);
			}
			index--;
		}
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
