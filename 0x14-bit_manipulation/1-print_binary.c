#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the given number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	static int count;

	if (n == 0)
	{
		if (count == 0)
			_putchar('0');
		return;
	}

	count++;
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
