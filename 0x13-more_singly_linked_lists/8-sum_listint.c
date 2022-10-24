#include <stdio.h>
#include "lists.h"

/**
 * sum_listint- Adding numbers
 * @head: member of linked list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
