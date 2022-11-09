#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: double pointer to the 2D array
 * @height: number of rows of the 2D
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
