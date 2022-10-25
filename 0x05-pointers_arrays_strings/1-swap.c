#include "main.h"

/**
 * swap_int - swap the value of two integers given their pointers
 * @a: first pointer variable
 * @b: second pointer variable
 * Return: void
 */
void swap_int(int *a,  int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
