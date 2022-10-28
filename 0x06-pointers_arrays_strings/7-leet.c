#include "main.h"

/**
 * leet - encode string into 1337
 * @s: the string
 * Return: char
 */
char *leet(char *s)
{
	int i = 0, j;

	char num[6] = {'4', '3', '0', '7', '1'};
	char aux1[6] = {'a', 'e', 'o', 't', 'l'};
	char aux2[6] = {'A', 'E', 'O', 'T', 'L'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == aux1[j] || s[i] == aux2[j])
				s[i] = num[j];
		}
		i++;
	}
	return (s);
}
