#include <stdio.h>
#include "lists.h"

/**
 * *list_len - Printing the length of linked list
 * * @h: pointer to the linked list
 * * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	{
		return (0);
	}

	count = 1 + list_len(h->next);
	return (count);
}
