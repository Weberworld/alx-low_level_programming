#include "main.h"

/**
 * free_grid - Deallocates the space of a previousl allocated 2-dim array
 * @grid: 2-dim array that needs to be deallocated
 * @height: Number of rows in the grid parameter
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL && height > 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
