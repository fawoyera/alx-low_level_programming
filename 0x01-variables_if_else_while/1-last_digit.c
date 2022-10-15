#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n == 0) || (n % 10) == 0)
		printf("Last digit of %d is %i and is 0\n", n, n % 10);
	if ((n > 0) && ((n % 10) > 5))
	{
		printf("Last digit of %d is %i ", n, n % 10);
		printf("and is greater than 5\n");
	}
	if ((n > 0) && ((n % 10) <  6))
		if ((n % 10) != 0)
		{
			printf("Last digit of %d is %i ", n, n % 10);
			printf("and is less than 6 and not 0\n");
		}
	if ((n < 0) && ((10 - (10 - (n % 10))) > 5))
	{
		printf("Last digit of %d is %i ", n, 10 - (10 - (n % 10)));
		printf("and is greater than 5\n");
	}
	if ((n < 0) && ((10 - (10 - (n % 10))) < 6))
		if ((10 - (10 - (n % 10))) != 0)
		{
			printf("Last digit of %d is %i ", n, 10 - (10 - (n % 10)));
			printf("and is less than 6 and not 0\n");
		}
	return (0);
}
