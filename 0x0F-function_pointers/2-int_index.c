#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - call_back function
 *
 * @array: an array
 * @size: the size of an array
 * @cmp: callback function
 * Return: always int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
return (-1);
}

if (array && sizse && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
}