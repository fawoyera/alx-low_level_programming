#include "main.h"
int _pow_recursion(int x, int y);
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to array of binary digits
 *
 * Return: unsigned int or 0 if b is null or contains non-binary char
 */
unsigned int binary_to_uint(const char *b)
{
	char *c = (char *)b;
	unsigned int sum = 0;
	int n = 0;

	if (b == NULL)
		return (0);

	while (*c++)
		n++;
	c = (char *)b;
	while (*c)
	{
		if (*c != '0' && *c != '1')
			return (0);
		if (*c == '0')
			sum += 0 * _pow_recursion(2, --n);
		else
			sum += 1 * _pow_recursion(2, --n);
		c++;
	}
	return (sum);
}

/**
 * _pow_recursion - find the value of x raised to power y
 * @x: the base number
 * @y: the power
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
