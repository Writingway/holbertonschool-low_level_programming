#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - check the allocation
 * @d: pointer
 * Return: Nothing.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		return;
	}
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
		return;
	}
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
		return;
	}
	else
		printf("Owner: %s\n", d->name);

}
