#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free a memory
 * @grid: double pointer
 * @height: size of array of pointer
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
