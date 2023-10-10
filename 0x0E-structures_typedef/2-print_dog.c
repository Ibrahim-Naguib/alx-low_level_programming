#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to print.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	!d->name ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	!d->age ? printf("Age: (nil)\n") : printf("Age: %.1f\n", d->age);
	!d->owner ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
