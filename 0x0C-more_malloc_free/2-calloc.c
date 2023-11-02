#include "main.h"
/**
 * _calloc - allocate memory and set memory to zero
 * @nmemb: number of elements
 * @size: amount of bytes for each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		((char *)ptr)[i] = 0;
	return (ptr);
}
