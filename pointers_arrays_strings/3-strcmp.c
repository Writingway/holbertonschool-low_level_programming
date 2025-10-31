#include "main.h"

/**
 * _strcmp - concatenates two string
 *@s1: destination
 *@s2: source
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 + 1)
		if (*s1 + 1 == 0)
			return (0);
	return (*s1 - *s2);
}
