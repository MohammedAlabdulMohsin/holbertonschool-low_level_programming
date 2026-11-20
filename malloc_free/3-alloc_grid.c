#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers initialized to 0
 * @width: number of columns in the grid
 * @height: number of rows in the grid
 *
 * Return: pointer to the 2D array, or NULL on failure or invalid dimensions
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
