#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string input
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j, k = 0, l;
	char t[1000];

	while (*(s + i) != '\0')
	{
		i++;
	}

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
