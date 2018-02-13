#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to 2-D array of ints
 *@width: width of grid
 *@height: height of grid
 *
 *Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
