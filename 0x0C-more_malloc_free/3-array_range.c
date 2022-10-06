#include "main.h"
#include <stdlib.h>

/**
 * array_range - printing ranges of number
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: always *int
 */
int *array_range(int min, int max)
{
int *arr, i = 0, t = min;

if (min > max)
{
return (0);
}

arr = malloc((max - min + 1) * sizeof(int));
if (!arr)
{
return (0);
}
while (i <= max - min)
{
arr[i++] = t++;
}
return (arr);
}