#include "dog.h"

/**
 * init_dog - init variable of type dog
 * @d: the struct
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
