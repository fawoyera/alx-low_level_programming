#include "main.h"

int _power(int, int);

/**
 * _atoi - convert a string to an integer
 * @s: string input
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, j, l, n = 0, nf, nl, num = 0, neg = 0;
	unsigned int m, sum = 0;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (*(s + j) == '-')
			neg++;
		if ((*(s + j) >= '0') && (*(s + j) <= '9'))
		{
			nf = j;
			break;
		}
	}
	for (j = 0; j < i; j++)
	{
		if ((*(s + j) >= '0') && (*(s + j) <= '9'))
		{
			num++;
			if ((*(s + j + 1) >= '0') && (*(s + j + 1) <= '9'))
			{
				continue;
			}
			else
			{
				nl = j;
				break;
			}
		}
	}
	if (num == 0)
	{
		return (0);
	}
	else
	{
		for (l = nl; l >= nf; l--)
		{
			m = ((int) *(s + l) - (int) '0');
			m = m * _power(10, n);
			sum = sum + m;
			n++;
		}
		if (neg % 2 == 0)
			return (sum);
		else
			return (0 - sum);
	}
}

/**
 * _power - return base num raise to the power of exponent num
 * @base: the base num
 * @exponent: the exponent num
 * Return: int
 */
int _power(int base, int exponent)
{
	int result = 1;
	int raise;

	for (raise = exponent; raise > 0; raise--)
	{
		result = result * base;
	}
	return (result);
}

