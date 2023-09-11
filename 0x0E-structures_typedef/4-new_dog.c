#include "dog.h"
#include<stdlib.h>

/**
 * new_dog - A  function that creates a new dog.
 *
 * @name: Name of a dog
 * @age: age of a dog
 * @owner: The dog's owner.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int p, q, r;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (p = 0; name[p]; p++)
		;
	p++;
	dog->name = malloc(p * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (r = 0; r < p; r++)
		dog->name[r] = name[r];
	dog->age = age;
	for (q = 0; owner[q]; q++);
	dog->age = age;
	for (q = 0; owner[q]; q++)
		;
	q++;
	dog->owner = malloc(q * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (r = 0; r < q; r++)
		dog->owner[r] = owner[r];
	return (dog);
}
