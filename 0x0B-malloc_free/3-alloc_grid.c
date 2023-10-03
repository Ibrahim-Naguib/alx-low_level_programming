#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid of integers
 * @width: the width (number of columns) of the grid
 * @height: the height (number of rows) of the grid
 *
 * Return: pointer to the allocated 2D grid, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(height * sizeof(*int));
	if (width <= 0 || height <= 0 || grid == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**int));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
