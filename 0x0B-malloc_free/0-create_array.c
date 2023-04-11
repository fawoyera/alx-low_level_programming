#include "main.h"

/**
 * create_array - function that create an array of chars and initializes with c
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
