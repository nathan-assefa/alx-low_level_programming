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


	i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{

			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}

	return (i);
}
