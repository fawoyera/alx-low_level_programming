#include "main.h"

/**
 * _sqrt_recursion - function to find the natural square root of numbers
 * @n: the number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - auxiliary function to find square root
 * @n: the number
 * @i: counter from 0 to n
 *
 * Return: the square root of n
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, (i + 1)));
}
