#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - printing two dimensional array
 *
 * @height: the height of the matrix
 * @width: the width of the matrix
 *
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int i;

	int **matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (1);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
	}

	return (matrix);
}
