#include <stdio.h>
#include "lists.h"

/**
 * listint_len- Returns the length of linked list
 * @h: member of linked list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
