#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print times table for number n
 * @n: the number
 * Return: Always 0
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%i", i * j);
				if (j != n)
				{
					int k = (i * (j + 1));

					printf(", ");
					if ((k >= 10) && (k <= 99))
						printf(" ");
					if (k < 10)
						printf("  ");
				}
			}
			printf("\n");
		}
	}
}
