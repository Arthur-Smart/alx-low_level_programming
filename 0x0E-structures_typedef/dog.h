#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Attribute given to Dog element
 * @name: Name given to dog
 * @age: The age of the dog
 * @owner: The dog owner *
 * Description: Dog's attribute
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Dog structure typedef
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
