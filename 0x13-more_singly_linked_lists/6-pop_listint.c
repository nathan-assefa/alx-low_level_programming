#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- Delets the head of linked list
 * @head: member of linked list
 * Return: ini
 */
int pop_listint(listint_t **head)
{
	int tmp2;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp2 = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	return (tmp2);
}
