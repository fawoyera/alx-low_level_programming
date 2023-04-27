#include "main.h"
int _atoi(char *s);
int _power(int base, int exponent);
void _puts(char *str);
void _print(unsigned long n);
int _strlen(char *s);

/**
 * main - multiply two integers passed as command line arg
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned long i = 0, j, k, product, carry;
	unsigned int len1, len2, len11, len22, flag = 0;
	unsigned int *res;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len11 = len1;
	len22 = len2;
	while (len1--)
	{
		if (((int)argv[1][i]) < '0' || ((int)argv[1][i]) > '9')
		{
			_puts("Error");
			exit(98);
		}
		i++;
	}
	i = 0;
	while (len2--)
	{
		if (((int)argv[2][i]) < '0' || ((int)argv[2][i]) > '9')
		{
			_puts("Error");
			exit(98);
		}
		i++;
	}
	if (_atoi(argv[1]) == 0 || _atoi(argv[2]) == 0)
	{
		_print(0);
		_putchar('\n');
		return (0);
	}
	res = calloc((len11 + len22), sizeof(unsigned int));
	for (i = len11; i > 0; i--)
	{
		for (j = len22; j > 0; j--)
		{
			product = (argv[1][i - 1] - '0') * (argv[2][j - 1] - '0');
			res[len11 - i + len22 - j] += product;
		}
	}
	for (k = 0; k < len11 + len22 - 1; k++)
	{
		carry = res[k] / 10;
		res[k] %= 10;
		res[k + 1] += carry;
	}
	for (k = len11 + len22; k > 0; k--)
	{
		if (flag == 0 && res[k - 1] == 0)
		{
			continue;
		}
		else
		{
			flag = 1;
			_print(res[k - 1]);
		}
	}
	_putchar('\n');
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * _atoi - convert a strign to an integer
 * @s: string input
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, j, n = 0;
	unsigned int m, sum = 0;

	while (*(s + i) != '\0')
		i++;
	i--;
	for (j = i; j >= 0; j--)
	{
		m = ((int) *(s + j) - (int) '0');
		m = m * _power(10, n);
		sum = sum + m;
		n++;
	}
	return (sum);
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
		result = result * base;
	return (result);
}

/**
 * _print - print long integer using _putchar
 * @n: the long integer
 * Return: void
 */
void _print(unsigned long n)
{
	if (n / 10)
		_print(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * _puts - print a string to stdout
 * @str: the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

