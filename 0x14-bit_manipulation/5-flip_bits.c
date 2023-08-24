#include "main.h"

/**
 * flip_bits - find the number of bits to flip to get from one num to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	int count_bit = 0;

	tmp = (n ^ m);
	while (tmp)
	{
		if ((tmp & 1) == 1)
			count_bit++;
		tmp >>= 1;
	}
	return (count_bit);
}
