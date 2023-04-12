#include "search_algos.h"
#define PRINT_CHECKED(idx, item) \
	printf("Value checked array[%u] = [%d]\n", (idx), (item))

#define PRINT_BOUNDED(low, high) \
	printf("Value found between indexes [%u] and [%u]\n", (low), (high))

/**
* find_mid - Finds the min value
* @a: integer
* @b: integer
* Return: min value
*/
int find_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b - 1);
}

/**
* jump_search - Searching a number using jump search
* @array: array to be searched
* @size: size of an array
* @value: value to be searched
* Return: value
*/
int jump_search(int *array, size_t size, int value)
{
	int start, end;

	if (!array)
		return (-1);

	end = 0;
	start = 0;

	while (array[end] < value && end < (int) size)
	{
		PRINT_CHECKED(end, array[end]);
		start = end;
		end += sqrt(size);
	}


	PRINT_BOUNDED(start, end);
	while (start <= find_min(end, size))
	{
		PRINT_CHECKED(start, array[start]);

		if (array[start] == value)
			return (start);
		start++;

	}

	return (-1);
}
