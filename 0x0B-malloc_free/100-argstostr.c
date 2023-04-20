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
	int mem = 0, i, j, k = 0;

	if ((ac == 0) || (av == 0))
		return (0);

	for (i = 0; i < ac; i++)
	{
		mem += _strlen(av[i]);
	}
	mem = mem + ac + 1;

	newstr = malloc(mem * sizeof(char));
	if (newstr == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[k] = av[i][j];
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	return (newstr);
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

	while (*s++)
		i++;
	return (i);
}
