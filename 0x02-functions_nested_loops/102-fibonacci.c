#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	for (i = 0; i < 50; i++)
	{
		printf("%li", fib[i]);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
