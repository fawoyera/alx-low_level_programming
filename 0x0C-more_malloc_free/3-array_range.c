#include "main.h"
/**
 * array_range - create an array of integers
 * @min: starting number
 * @max: ending number
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int *tmp_arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == 0)
		return (NULL);
	tmp_arr = arr;
	for (i = min; i <= max; i++)
		*arr++ = min++;
	return (tmp_arr);
}
