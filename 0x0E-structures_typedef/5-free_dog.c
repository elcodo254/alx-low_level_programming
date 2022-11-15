#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog structure variables
 * @d: pointer to dog variable
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
