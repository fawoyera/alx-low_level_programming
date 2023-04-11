#include "main.h"
int _strlen(char *s);
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	char *tmpstr;
	int mem, i, j;
	int *len;

	if ((ac == 0) || (av == 0))
		return (0);
	len = malloc(ac * sizeof(int));
	if (len == 0)
		return (0);
	mem = 0;
	for (i = 0; i < ac; i++)
	{
		len[i] = _strlen(av[i]);
		mem += (len[i] + 1);
	}

	newstr = malloc(mem * sizeof(char));
	if (newstr == 0)
		return (0);
	tmpstr = newstr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < len[i]; j++)
			*newstr++ = av[i][j];
		*newstr++ = '\n';
	}
	return (tmpstr);
}
/**
 * _strlen - find length of string
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (!*s)
		i++;
	return (i);
}
