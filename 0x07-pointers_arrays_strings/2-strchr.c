#include "main.h"

/**
 * _strchr - function to return pointer to 1st occurence of char c in string s
 * @s: the string to search through
 * @c: the character to find
 *
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
