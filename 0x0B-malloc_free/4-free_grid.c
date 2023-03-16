#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Function that free 2 dimensional grid
 *@grid: The grid
 *@height: The height of the grid
 *Return: always nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i <= height; i++)
	{
		free((int *)grid[i]);
	}
	free(grid);
}
