#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- Freeing memory
 * @head: pointer to the poitet poits to node
 */
void free_listint2(listint_t **head)
{

	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

}
