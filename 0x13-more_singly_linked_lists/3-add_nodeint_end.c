#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end- Adding node at the end
 * @head: the head of the linked list
 * @n: data to be insterted in the linked list
 * Return: always listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end;
	listint_t *tmp;

	add_end = malloc(sizeof(listint_t));
	if (add_end == NULL)
	{
		return (NULL);
	}
	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_end;
	}
	else
	{

		tmp = *head;

		for (; tmp->next; tmp = tmp->next)
		{
			if (tmp->next == NULL)
			{
				tmp->next = add_end;
			}
		}

		tmp->next = add_end;
	}


	return (add_end);

}
