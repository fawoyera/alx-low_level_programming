#include "main.h"
char **_splitstr(char *tmpstr, int words, char **arr);
/**
 * strtow - split a string into words
 * @str: the string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j = 0, words;
	char **arr;
	char *tmpstr;

	tmpstr = str;
	if (str == 0 || *str == '\0')
		return (0);
	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i] != '\0')
			words++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	if (words == 0)
		return (0);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	for (i = 0; i < words; i++)
	{
		while (*str == ' ')
			str++;
		j = 0;
		while (*str != ' ' && *str != '\0')
		{
			j++;
			str++;
		}
		arr[i] = malloc((j + 1) * sizeof(char));
		if (arr[i] == 0)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (0);
		}
	}
	return (_splitstr(tmpstr, words, arr));
}

/**
 * _splitstr - split a string into an array of words
 * @tmpstr: pointer to string
 * @words: number of words in the string
 * @arr: pointer to array of words
 * Return: pointer to array of words
 */
char **_splitstr(char *tmpstr, int words, char **arr)
{
	int i, k;

	for (i = 0; i < words; i++)
	{
		while (*tmpstr == ' ')
			tmpstr++;
		k = 0;
		while (*tmpstr != ' ' && *tmpstr != '\0')
		{
			arr[i][k] = *tmpstr++;
			k++;
		}
		arr[i][k] = '\0';
		tmpstr++;
	}
	i++;
	arr[i] = 0;
	return (arr);
}
