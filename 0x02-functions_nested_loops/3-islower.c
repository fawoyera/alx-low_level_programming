#include "main.h"

/**
 * _islower - return value 1 if character passed is in lowercase and 0 if not
 * @c: character to check if in lowercase
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
