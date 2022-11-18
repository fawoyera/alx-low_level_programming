#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: the string
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separator[14] = " \t\n,:.!?\"(){}";

	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (i == 0)
					s[i] = s[i] - 32;
				for (j = 0; j < 13; j++)
				{
					if (s[i - 1] == separator[j])
						s[i] = s[i] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
