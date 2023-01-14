#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid previously created
 * @grid - address of two dimensional grid
 * @width: width of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
