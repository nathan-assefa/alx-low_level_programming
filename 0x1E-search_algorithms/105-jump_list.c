#include "search_algos.h"

/**
* jump_list - Jump list in linked list
* @list: head pointer to linked list
* @size: size of a linked list
* @value: value to be searched
* Return: Pointer to a node having a value
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head;
	int i, block_size;

	if (!list)
		return (NULL);

	head = NULL;
	block_size = sqrt(size);

	for (; list->next;)
	{
		head = list;

		for (i = 0; i < block_size; i++)
		{
			list = list->next;
			if (!list->next)
				break;
		}

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

		if (list->n > value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", head->index,
	list->index);
	while (head && head != head->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);

		head = head->next;
	}

	return (NULL);
}
