#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - The length of a string
 * @s: String valuation *
 * Return: The string length
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - Duplicates a string
 * @dest: Final destination
 * @src: Initial Value *
 * Return: A pointer the to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog.
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: New dog or  NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

