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
	if (width == 0 || height == 0)
		return (NULL);

	int **matrix;
	int i, j;

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
	for (i = 0; i < height; i++)
	{
		free(matrix[i]);
	}
	free(matrix);

}
