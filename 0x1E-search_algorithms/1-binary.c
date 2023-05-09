#include "search_algos.h"

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
* bst_srch - binary search algorithm
* @array: array to be searched
* @low: the first index in the sub array
* @high: the last index in the sub array
* @value: Value to be searched
* Return: The index of a value to be searched
*/
int bst_srch(int *array, int low, int high, int value)
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
			return (bst_srch(array, low, mid - 1, value));
		}

		print_array(array + mid + 1, high - mid);
		return (bst_srch(array, mid + 1, high, value));
	}

	return (-1);
}


/**
* binary_search - Searching for a number using binary search
* @array: array to be searched
* @size: size of an array
* @value: value to be searched
* Return: value
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	print_array(array, size);
	return (bst_srch(array, 0, size - 1, value));
}
