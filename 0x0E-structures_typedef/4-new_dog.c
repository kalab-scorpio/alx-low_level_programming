/**
 * new_dog - creates a new dog struct object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: pointer of the new dog struct object
 */
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
