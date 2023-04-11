#include "main.h"
/**
 * free_grid - function to free 2-d array grid
 * @grid: the 2-d array
 * @height: number of rows in array
 *
 * Return: void
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
