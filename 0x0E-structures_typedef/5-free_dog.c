#include <stdlib.h>
#include "dog.h"
#include <stdio.h>


/**
 * free_dog - that frees dogs.
 *
 * @d: the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}


