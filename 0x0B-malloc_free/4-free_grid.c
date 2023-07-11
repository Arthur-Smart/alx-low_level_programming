#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: Grid in account
 * @height: Height of grid
 * Description: Frees memory
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}

