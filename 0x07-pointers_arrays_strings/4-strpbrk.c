#include "main.h"
/**
 * _strpbrk - function to search a string for any of a set of bytes
 * @s: the string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to byte location
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len_of_s, len_of_accept;

	i = 0;
	while (s[i] != '\0')
		i++;
	len_of_s = i;

	j = 0;
	while (accept[j] != '\0')
		j++;
	len_of_accept = j;

	i = 0;
	while (i < len_of_s)
	{
		for (j = 0; j < len_of_accept; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
