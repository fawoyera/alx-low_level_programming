#include "main.h"

/**
 * print_last_digit - print the last digit of an entry
 * @n: the input number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int lg = 0 - (n % 10);

		_putchar(lg + '0');
		return (lg);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
