#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - check the allocation
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 * Return: Nothing.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp = malloc(sizeof(dog_t));

	if (tmp == NULL)
		return (NULL);

	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;

	return (tmp);
}
