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
	char *answer = haystack, *gneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (answer);
		needle = gneedle;
		answer++;
		haystack = answer;
	}
	return (0);
}
