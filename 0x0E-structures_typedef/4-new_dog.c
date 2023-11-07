#include <stdlib.h>
#include "dog.h"
char *_copy_dog(char *dog);
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bullet;
	char *new_name;
	char *new_owner;

	new_name = _copy_dog(name);
	if (new_name == NULL)
		return (NULL);
	new_owner = _copy_dog(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	bullet = malloc(sizeof(dog_t));
	if (bullet == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	bullet->name = new_name;
	bullet->age = age;
	bullet->owner = new_owner;
	return (bullet);
}
/**
 * _copy_dog - create a new copy of dog
 * @dog: the dog to duplicate
 *
 * Return: pointer to new dog copy
 */
char *_copy_dog(char *dog)
{
	char *new_dog;
	int i, j;

	i = 0;
	while (dog[i])
		i++;
	new_dog = malloc((i + 1) * sizeof(char));
	if (new_dog == NULL)
		return (NULL);
	j  = 0;
	while (dog[j])
	{
		new_dog[j] = dog[j];
		j++;
	}
	new_dog[j] = dog[j];
	return (new_dog);
}
