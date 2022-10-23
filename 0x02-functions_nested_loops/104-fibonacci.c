#include <stdio.h>

/**
 * main - prints the first 100 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, l;

	j = 1;
	k = 2;

	printf("%lu, %lu, ", j, k);
	for (i = 2; i < 99; i++)
	{
		l = j + k;
		if (i != 98)
		{
			printf("%lu, ", l);
			j = k;
			k = l;
		}
		else
		{
			printf("%lu\n", l);
		}
	}
	return (0);
}
