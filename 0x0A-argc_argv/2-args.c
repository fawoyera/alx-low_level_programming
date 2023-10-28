#include "main.h"

/**
 * main - Entry point
 * @argc: argumnet count
 * @argv: argumnet vector
 *
 * Return: 0 if Success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
