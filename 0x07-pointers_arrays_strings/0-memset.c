#include "main.h"


/**
 * _memset - function to fill memory with a constant byte
 * @s: pointer to the memory to fill
 * @b: the constant character
 * @n: the first n bytes of memory to fill
 *
 * Return: pointer to the memory that is filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
