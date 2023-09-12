#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes the struct dog.
 * @d: name of struct
 * @name: name of dog in the struct
 * @age: age of dog in the struct
 * @owner: name of owner of dog in the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;

	d->age = age;

	d->owner = owner;
	}
}
