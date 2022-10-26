#include "main.h"

/**
 * _strcpy - copy string in src pointer to dest pointer
 * @dest: destination pointer
 * @src: source pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
