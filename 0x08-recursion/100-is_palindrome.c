#include "main.h"

/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if string is palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = (_strlen_recursion(s));

	return (is_pal(s, 0, len - 1));
}

/**
 * is_pal - auxiliary function to check if string is a palindrome
 * @s: the string
 * @i: counter
 * @len: length of string
 *
 * Return: 1 if string is palindrome and 0 otherwise
 */
int is_pal(char *s, int i, int len)
{
	if (!*s)
		return (1);
	if (s[i] != s[len])
		return (0);
	if (i == len)
		return (1);
	if (i == len - 1)
		return (1);
	return (is_pal(s, ++i, --len));
}

/**
 * _strlen_recursion - function to return the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
