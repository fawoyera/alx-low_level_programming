#include <stdio.h>

/**
 * main - prints the first 100 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, j0, j1, k0, k1, l0, l1;

	j = 1;
	k = 2;

	printf("%lu, %lu, ", j, k);
	for (i = 2; i < 92; i++)
	{
		l = j + k;
		printf("%lu, ", l);
		j = k;
		k = l;
	}
	j0 = j / 10000000000;
	j1 = j % 10000000000;
	k0 = k / 10000000000;
	k1 = k % 10000000000;
	for (i = 92; i < 98; i++)
	{
		l0 = (j0 + k0) + ((j1 + k1) / 10000000000);
		l1 = (j1 + k1) % 10000000000;
		if (i != 97)
			printf("%lu%lu, ", l0, l1);
		else
			printf("%lu%lu\n", l0, l1);
		j0 = k0;
		j1 = k1;
		k0 = l0;
		k1 = l1;
	}
	return (0);
}
