#include "lists.h"

/**
 * * free_dlistint- Free the list
 * * @head: pointet to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
