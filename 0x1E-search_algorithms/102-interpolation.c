#include "search_algos.h"

/**
* interpolationSearch - searching for a number
* @arr: array to be searched
* @lo: lower index in the array
* @hi: higher index in the array
* @x: value to be searched
* Return: value
*/
int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos = 0;

	if (lo <= hi && x >= arr[lo] && x <= arr[hi])
	{

		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
			* (x - arr[lo]));
		printf("Value checked array[%d] = [%d]\n", pos, arr[pos]);

		if (arr[pos] == x)
			return pos;

		if (arr[pos] < x)
			return interpolationSearch(arr, pos + 1, hi, x);

		if (arr[pos] > x)
			return interpolationSearch(arr, lo, pos - 1, x);
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return -1;
}

/**
* interpolation_search - interpolation search algorithm
* @array: array to be searched
* @size: size of an array
* @value: value to be searched
* Return: value
*/
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return interpolationSearch(array, 0, size - 1, value);
}
