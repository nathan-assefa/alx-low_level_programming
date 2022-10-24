#include <stdio.h>
#include "lists.h"

/**
 * print_listint- lists the data inside the linked list
 * @h: single linked list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
	{
		return (0);

	len = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
