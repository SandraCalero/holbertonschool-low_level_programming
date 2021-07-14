#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure, width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		*(p + i) = malloc(sizeof(int *) * width);
		if (*(p + i) == NULL)
		{
			free(*(p + i));
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
