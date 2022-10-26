#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe- Printing linked list with thier adress
 * @head: Head of linked list
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len;

	if (head == NULL)
	{
		exit(98);
	}

	len = 0;
	while (head != NULL)
	{
		if (len == 8)
		{
			printf("-> [%p] %i\n", (void *) head, head->n);
			break;
		}
		printf("[%p] %i\n", (void *) head, head->n);
		len++;
		head = head->next;
	}
	return (len);
}
