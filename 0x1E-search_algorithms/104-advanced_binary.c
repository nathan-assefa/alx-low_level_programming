#include "search_algos.h"

/**
* print_array - printing an array
* @array: array to be searched
* @size: size of an array
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
* bs - binary search algorithm
* @array: array to be searched
* @size: size of an array
* @low: the first index in the sub array
* @high: the last index in the sub array
* @value: Value to be searched
* Return: The index of a value to be searched
*/
int bs(int *array, size_t size, int low, int high, int value)
{
	int mid;

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (array[mid - 1] < value)
			return (mid);
		print_array(array, mid + 1);
		return (bs(array, size, low, mid, value));
	}

	if (low < high)
	{
		if (value < array[mid])
		{
			print_array(array, mid - low);
			return (bs(array, size, low, mid - 1, value));
		}

		print_array(array + mid + 1, high - mid);
		return (bs(array, size, mid + 1, high, value));
	}
	return (-1);
}

/**
* advanced_binary - Advanced binary search algorithm
* @array: array to be searched
* @size: size of an array
* @value: a value to be searched
* Return: index of the searched value
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	print_array(array, size);
	return (bs(array, size, 0, size - 1, value));
}
