#include <stdlib.h>
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
	char *A;

	if (size == 0)
		return (0);
	A = malloc(size * sizeof(char));
	if (A == 0)
		return (0);
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
