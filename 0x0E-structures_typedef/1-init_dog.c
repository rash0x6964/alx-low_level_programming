#include "dog.h"
#include <string.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = strdup(name);
		(*d).age = age;
		(*d).owner = strdup(owner);
	}
}
