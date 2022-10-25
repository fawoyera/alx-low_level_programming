#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j, k = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	int m = i + 1;
	char t[m];
	int l;

	for (l = 0; l < i; l++)
	{
		t[l] = s[l];
	}

	for (j = i - 1; j >= 0; j--)
	{
		*(s + k) = *(t + j);
		k++;
	}
}
