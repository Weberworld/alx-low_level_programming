#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - Free the memory of a given dog struct
 * @d: dog struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
