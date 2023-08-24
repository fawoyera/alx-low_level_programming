#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of own main function
 * @argc: argument counter
 * @argv: argumnet vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02x ", opcode[i] & 0xFF);
	}
	printf("%02x\n", opcode[i] & 0xFF);

	return (0);
}
