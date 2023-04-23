#include "main.h"
/**
 * malloc_checked - allocate memory using malloc and exit if unsuccessful
 * @b: amount of bytes of memory to allocate
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == 0)
		exit(98);
	return (ptr);
}
