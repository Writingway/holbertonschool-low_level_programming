#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen_custom - create a new dog
 * @s: pointer
 * Return: struct.
*/
int _strlen_custom(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * _strdup_custom - create a new dog
 * @src: pointer
 * Return: struct.
*/
char *_strdup_custom(char *src)
{
	int len, i;
	char *dest;

	if (src == NULL)
		return (NULL);

	len = _strlen_custom(src);
	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create a new dog
 * @name: pointer
 * @age: pointer
 * @owner: pointer
 * Return: struct.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;
	char *newName, *newOwner;

	if (name == NULL || owner == NULL)
		return (NULL);

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);

	newName = _strdup_custom(name);
	if (newName == NULL)
	{
		free(tmp);
		return (NULL);
	}

	newOwner = _strdup_custom(owner);
	if (newOwner == NULL)
	{
		free(newName);
		free(tmp);
		return (NULL);
	}

	tmp->name = newName;
	tmp->owner = newOwner;
	tmp->age = age;

	return (tmp);
}
