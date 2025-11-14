#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check the allocation
 * @d: pointer
 * Return: Nothing.
*/

void free_dog(dog_t *d)
{
	if (d == NULL || d->name == NULL || d->owner == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
