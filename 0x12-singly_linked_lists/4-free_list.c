#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list- freeing list
 * @head: pinter to a list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}


