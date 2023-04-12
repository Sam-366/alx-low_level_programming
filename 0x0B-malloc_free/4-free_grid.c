#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory
 * @grid: refer to grid
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL && height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
