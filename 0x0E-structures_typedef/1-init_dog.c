#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: dog to be initialized
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
