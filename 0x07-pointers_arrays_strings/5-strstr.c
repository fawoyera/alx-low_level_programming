#include "main.h"
/**
 * _strstr - locate the 1st occurence of substring needle in haystack
 * @haystack: the string to search
 * @needle: the substring
 *
 * Return: pointer to location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, len_of_haystack, len_of_needle;

	i = 0;
	while (haystack[i] != '\0')
		i++;
	len_of_haystack = i;

	j = 0;
	while (needle[j] != '\0')
		j++;
	len_of_needle = j;

	i = 0;
	while (i < len_of_haystack)
	{
		for (j = 0, l = i; j < len_of_needle; j++)
		{
			if (haystack[l] == needle[j])
			{
				if (j == 0)
					k = l;
				l++;
			}
			else
			{
				break;
			}
			if (j == len_of_needle - 1)
				return (haystack + k);
		}
		i++;
	}
	return (NULL);
}
