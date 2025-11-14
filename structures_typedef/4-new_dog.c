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
	int i = 0, j = 0;
	char *newName, *newOwner;
	dog_t *tmp = malloc(sizeof(dog_t));

    if (name == NULL || owner == NULL)
        return (NULL);

	if (tmp == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;

	newOwner = malloc(sizeof(char) * (j + 1));
	newName = malloc(sizeof(char) * (i + 1));

	if (newName == NULL)
	{
		free(tmp);
		return (NULL);
	}

	if (newOwner == NULL)
	{
		free(newName);
		free(tmp);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		newName[i] = name[i];
	newName[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		newOwner[j] = owner[j];
	newOwner[j] = '\0';

	tmp->name = newName;
	tmp->owner = newOwner;
	tmp->age = age;

	return (tmp);
}
