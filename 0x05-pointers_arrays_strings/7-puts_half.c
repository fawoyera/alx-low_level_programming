#include "main.h"

/**
 * puts_half - print the half of a string
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i / 2) + 1;
	for (j = n; j < i; j++)
		_putchar(*(str + j));
	_putchar('\n');
}
