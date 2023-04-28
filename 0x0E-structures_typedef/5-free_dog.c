#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs memory
 * @d: pointer to dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
