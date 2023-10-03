#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously allocated with alloc_grid
 * @grid: the 2D grid to be freed
 * @height: the height (number of rows) of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
