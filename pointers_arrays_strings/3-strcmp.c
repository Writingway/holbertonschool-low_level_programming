#include "main.h"

/**
 * _strcmp - compare two string
 *@s1: destination
 *@s2: source
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
