#include "main.h"

/**
 * strncat - concatenate two strings using n characters from src string
 * @dest: destination string
 * @src: source string
 * @n: number of characters of src to concatenate
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < (unsigned int) n)
		{
			*(dest + i) = *(src + j);
			j++;
			i++;
		}
		else
		{
			break;
		}
	}
	if (j < (unsigned int) n)
		*(dest + i) = '\0';
	return (dest);
}
