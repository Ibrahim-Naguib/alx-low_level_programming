#include "dog.h"

/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to the dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
