#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize
 * a variable of type struct dog
 * @d: The struct of the Dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: void
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

