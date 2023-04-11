#include "search_algos.h"

/**
* linear_search - Applying linear search
* @array: array to be searched
* @size: size of an array
* @value: Value to be found
* Return: a value
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
