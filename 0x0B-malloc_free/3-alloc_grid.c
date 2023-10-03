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
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (0);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (0);
	}
	return (grid);
}
