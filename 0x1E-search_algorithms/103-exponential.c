#include "search_algos.h"

#define BOUNDARY(idx, item) \
	printf("Value checked array[%lu] = [%d]\n", (idx), (item))

#define DESCRIPTION(low, high) \
	printf("Value found between indexes [%lu] and [%lu]\n", (low), (high))

/**
* print_array - Prints an array of integers
* @array: The array to be printed
* @size: Number of elements in @array
*/
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}


/**
* find_min - Finds the min value
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
* bs - binary search
* @array: Array to be searched
* @size: size of an array
* @low: least boundary
* @high: max boundary
* @value: value to be searched
* Return: The value
*/
int bs(int *array, size_t size, int low, int high, int value)
{
	int mid;

	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);

	if (low < high)
	{
		if (value < array[mid])
		{
			print_array(array + low, mid - low);
			return (bs(array, size, low, mid - 1, value));
		}

		print_array(array + mid + 1, high - mid);
		return (bs(array, size, mid + 1, high, value));

	}

	return (-1);
}

/**
* exponential_search - search algorithm
* @array: array to be searched
* @size: size of an array
* @value: value to be searched
* Return: value
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, j;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	for (i = 1; i < size && array[i] <= value; j = i, i *= 2)
		BOUNDARY(i, array[i]);

	i = find_min(i, size);
	DESCRIPTION(j, i);
	print_array(array + j, i - j + 1);
	return (bs(array, size, i / 2, i, value));
}
