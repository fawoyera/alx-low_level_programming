#include "main.h"
/**
 * is_prime_number - function to check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - auxiliary function to check for prime number
 * @n: the number to check
 * @i: counter
 *
 * Return: 1 if prime and 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	if (i == n)
		return (1);
	if ((n % i) == 0)
		return (0);
	if (i > (n / 2))
		return (1);
	return (_is_prime(n, i + 1));
}
