#include <stdio.h>

/**
 * main - print sum of multiples of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			j = j + i;
	}
	printf("%i\n", j);
	return (0);
}
