#include "lists.h"

/**
 * * sum_dlistint- add the data
 * * @head: pointer to linked list
 * * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
