#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid free
 * @height: height the grid
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || height == 0)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
