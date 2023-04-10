#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for Success
 */
int main(int argc, char *argv[])
{
	int i = 0, j, cents;
	int change[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		for (j = 0; j < 4; j++)
		{
			if (cents >= change[j])
			{
				i += cents / change[j];
				cents = cents % change[j];
			}
		}
		if (cents == 1)
		{
			i += 1;
		}
		printf("%d\n", i);
	}
	return (0);
}
