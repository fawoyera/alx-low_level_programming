#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from a number to 98
 * @n: the starting number
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
