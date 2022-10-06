#include "main.h"
#include <stdio.h>

/**
* array_range - printing ranges of number
* @min: minimum number in the array
* @max: maximum number in the array
* Return: always *int
*/
int *array_range(int min, int max)
{
	int i;
	int *range;

	if (min > max)
	{
		return (NULL);
	}

	range = malloc(sizeof(int) * max);
	if (range == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		range[i] = i;
	}
	return (range);


}
