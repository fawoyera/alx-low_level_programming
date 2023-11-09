#include "function_pointers.h"
/**
 * array_iterator - execute function action on each element of array
 * @array: array pointer
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
