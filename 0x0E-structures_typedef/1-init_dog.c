#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable type struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
