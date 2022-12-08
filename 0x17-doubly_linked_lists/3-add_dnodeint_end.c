#include "lists.h"

/**
 * * add_dnodeint_end- add node at the end
 * * @head: pointer to the list
 * * @n: data
 * * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	tail = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = new_node;
		new_node->prev = tail;
	}
	return (new_node);
}
