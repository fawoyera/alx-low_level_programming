#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to the given number
 * @index: the given index
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
