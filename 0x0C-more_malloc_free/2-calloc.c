#include "main.h"
/**
 * _calloc - allocate memory and set memory to zero
 * @nmemb: number of elements
 * @size: amount of bytes for each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
