#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of the integer if successful and -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if  (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
