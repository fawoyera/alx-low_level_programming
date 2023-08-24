#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: the first sting
 * @s2: the second string
 * @n: the number of bytes to concat in second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, n2, k;
	char *tmp_s1;
	char *tmp_s2;
	char *newstr;
	char *tmp_newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	tmp_s1 = s1;
	tmp_s2 = s2;
	while (*s1++)
		i++;
	while (*s2++)
		j++;
	if (n >= j)
		n2 = j;
	else
		n2 = n;
	k = i + n2;
	newstr = malloc((k + 1) * sizeof(char));
	if (newstr == 0)
		return (0);
	tmp_newstr = newstr;
	while (*tmp_s1)
		*newstr++ = *tmp_s1++;
	while (n2--)
		*newstr++ = *tmp_s2++;
	*newstr = '\0';
	return (tmp_newstr);
}
