#include "lists.h"

/**
 * * add_dnodeint- add node at the beginning
 * * @head: head pointer
 * * @n: Data
 * * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
