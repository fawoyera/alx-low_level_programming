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

	if (A == NULL)
	{
		_puts("failed to allocate memory");
		return (0);
	}
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
/**
 * _puts - prints string
 * @s: pointer to the string
 * Return: void
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

/**
 * _putchar - print a char
 * @c: the char
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
