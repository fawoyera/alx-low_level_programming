#include "main.h"
#include <limits.h>

/**
 * get_bit - get the value of a bit at a given index of n
 * @n: the given number
 * @index: the given index starting from 0
 *
 * Return: the value of the bit at given index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > UINT_MAX)
		return (-1);
	return ((n & (1 << index)) >> index);
}
