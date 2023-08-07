#include "main.h"
/**
 * alloc_grid - function that returns pointer to 2-d array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: double pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **A;

	if ((width <= 0) || (height <= 0))
		return (0);
	A = malloc(height * sizeof(int *));
	if (A == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		A[i] = malloc(width * sizeof(int));
		if (A[i] == 0)
		{
			for (; i >= 0; i--)
				free(A[i]);
			free(A);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			A[i][j] = 0;
		}
	}
	return (A);
}
