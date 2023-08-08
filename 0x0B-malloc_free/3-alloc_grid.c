#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		for (j = 0; j <width; j++)
			grid[i][j] = 0;
	}
	if (grid == NULL)
		return (NULL);
	return (0);
}
