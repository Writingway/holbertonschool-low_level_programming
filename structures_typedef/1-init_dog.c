#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check the allocation
 * @d: pointer
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 * Return: Nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
