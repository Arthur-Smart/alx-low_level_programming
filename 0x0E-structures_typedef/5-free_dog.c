#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 * @d: Dog struct to free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
