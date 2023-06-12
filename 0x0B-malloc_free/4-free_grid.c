#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: two dimensional grid
 * @height: rows
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
