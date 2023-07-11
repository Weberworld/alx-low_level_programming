#include "main.h"

/**
 * **alloc_grid - Returns a pointer to a 2-dim array of int
 * @height: No of rows of the array matrix
 * @width: Number of columns of th array matrix
 *
 * Return: Pointer (success) or Null (failed)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;


	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}

