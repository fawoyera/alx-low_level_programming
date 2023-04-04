#include "main.h"

/**
 * _strspn - function to get length of prefix substring
 * @s: the string
 * @accept: the bytes to select from
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] != *accept)
	{
		i++;
	}
	i++;

	return (i * sizeof(char));
}
