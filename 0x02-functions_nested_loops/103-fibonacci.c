#include <stdio.h>

/**
 * main - print the sum of even fibonacci numbers less than 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int j = 0;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	for (i = 0; i < 50; i++)
	{
		if ((fib[i] <= 4000000) && (((fib[i]) % 2) == 0))
			j = j + fib[i];
	}
	printf("%li\n", j);
	return (0);
}
