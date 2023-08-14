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
	char *tmp_name;
	char *tmp_owner;
	dog_t *res_dog;

	tmp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	tmp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	res_dog = malloc(sizeof(dog_t));

	if (tmp_name && tmp_owner && res_dog)
	{
		strcpy(tmp_name, name);
		strcpy(tmp_owner, owner);
		res_dog->name = tmp_name;
		res_dog->age = age;
		res_dog->owner = tmp_owner;
	}
	else
	{
		free(tmp_name);
		free(tmp_owner);
		free(res_dog);
		return (NULL);
	}
	return (res_dog);
}
