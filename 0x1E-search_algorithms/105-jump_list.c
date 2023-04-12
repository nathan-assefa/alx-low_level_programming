#include <math.h>
#include "search_algos.h"

/**
 * jump_list - search a single linked hold using the jump search method
 * @list: pointer to first node in linked hold
 * @size: size of the hold (number of nodes)
 * @value: value to be searched for
 *
 * Return: pointer to first node containing value or NULL if not present
 * or hold is empty
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *hold = NULL;
	int i, jump;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);

	while (list->next != NULL)
	{
		hold = list;

		for (i = 0; i < jump; i++)
		{
			list = list->next;
			if (list->next == NULL)
				break;
		}

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

		if (list->n > value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", hold->index,
	list->index);

	while (hold != NULL && hold != list->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", hold->index, hold->n);
		if (hold->n == value)
			return (hold);
		hold = hold->next;
	}

	return (NULL);
}
