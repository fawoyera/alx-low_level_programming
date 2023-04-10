#include "main.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if Success
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if ((argc - 1 < 1) || (atoi(argv[1]) == 0 && atoi(argv[2]) == 0))
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
