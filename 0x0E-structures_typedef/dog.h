#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog details
 *
 * @name: pointer to the dog name.
 * @age: dog's age.
 * @owner: pointer to the dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
