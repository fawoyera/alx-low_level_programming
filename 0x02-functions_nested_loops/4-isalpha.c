#include "main.h"

/**
 * _isalpha - check if input is an alphabet
 * @c: input to check
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
