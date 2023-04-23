#include "main.h"
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to old memory block
 * @old_size: size in bytes of old memory block
 * @new_size: size in bytes of new memory to allocate
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == 0)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
	if (new_size > old_size)
	{
		while (old_size--)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
			i++;
		}
	}
	else
	{
		while (new_size--)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
