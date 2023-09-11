#include "dog.h"
#include<stdlib.h>

/**
 * init_dog - a function that initializes a varaible
 * of type struct dog.
 *
 * @d: pointer to struct dog.
 * @name: name
 * @age: the age
 * @owner: The dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->ager = age;
	d->owner = owner;
}
