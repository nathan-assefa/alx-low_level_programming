#include "lists.h"

/**
 * delete_nodeint_at_index- Deleting node
 * @head: Head of the linked list
 * @index: position of the linked list
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *tmp2;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp2 = *head;

	if (index == 0)
	{
		*head = tmp2->next;
		free(tmp2);
		return (1);
	}



	else
	{
		i = 0;
		while (i != index)
		{
			tmp = tmp2;
			tmp2 = tmp2->next;
			i++;
		}

		tmp->next = tmp2->next;
		free(tmp2);
		tmp2 = NULL;

	}
	return (1);
}
