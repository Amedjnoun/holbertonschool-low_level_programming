#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: 2 dimensional grid.
 * @height: height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
