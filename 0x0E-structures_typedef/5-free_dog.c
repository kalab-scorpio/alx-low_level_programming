/**
 * free_dog - frees the memory occupied by d
 * @d: pointer to be freed
 */
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	free(d);
}
