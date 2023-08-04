#include "main.h"

/**
 * main- Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if Success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
