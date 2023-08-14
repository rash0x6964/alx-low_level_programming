#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res_dog;

	if (!name || !owner)
		return (NULL);

	res_dog = malloc(sizeof(dog_t));
	if (!res_dog)
		return (NULL);

	res_dog->name = strdup(name);
	if (!res_dog->name)
	{
		free(res_dog);
		return (NULL);
	}
	res_dog->age = age;
	res_dog->owner = strdup(owner);
	if (!res_dog->owner)
	{
		free(res_dog->name);
		free(res_dog);
		return (NULL);
	}
	return (res_dog);
}
