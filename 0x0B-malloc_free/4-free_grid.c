#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free tha grid
 * @grid: 2d grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
