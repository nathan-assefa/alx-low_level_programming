#include "lists.h"

/**
 * reverse_listint- reversing linked list
 * @head: head of linekd list;
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp = NULL;
	tmp2 = NULL;

	while (*head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = tmp2;
	}

	*head = tmp;
	return (*head);
}
