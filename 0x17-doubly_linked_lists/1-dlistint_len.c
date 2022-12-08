#include "lists.h"

/**
 * dlistint_len- to find the length
 * @h: pointer to the list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *current;

	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
