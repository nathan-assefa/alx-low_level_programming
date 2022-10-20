#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing the elements of linked list
 * @h: a pointer to a structure
 * Return: always len
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	if (h->str == NULL)
	{
		printf("[0] (nail)\n");
		h = h->next;
	}

	i = 0;
	for (tmp = h; tmp; tmp = tmp->next)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
		i++;
	}

	return (i);
}
