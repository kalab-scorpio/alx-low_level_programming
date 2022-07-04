/**
 * init_dog - initializes the structure dog
 * @d: the data struct that holdes info about the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
