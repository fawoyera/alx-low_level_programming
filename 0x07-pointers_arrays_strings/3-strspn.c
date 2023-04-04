#include "main.h"

/**
 * _strspn - function to get number of bytes of string in substring
 * @s: the string
 * @accept: the bytes to select from
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, len_of_accept, len_of_s;

	j = 0;
	while (*(accept + j) != '\0')
		j++;
	len_of_accept = j;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	len_of_s = i;

	i = 0;
	while (i < len_of_s)
	{
		if (s[i] == *accept)
		{
			i++;
		}
		else
		{
			for (k = 1; k < len_of_accept; k++)
			{
				if (s[i] == *(accept + k))
				{
					i++;
					break;
				}
			}
			if (k == len_of_accept)
				return (i * sizeof(char));
		}
	}
	return (i * sizeof(char));
}
