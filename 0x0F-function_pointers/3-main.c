#include "3-calc.h"

/**
 * main - Perform simple math operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((ptr == op_div || ptr == op_mod) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
