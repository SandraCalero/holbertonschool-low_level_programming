#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 *
 * @grid: pointer to a ponter to an array
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
