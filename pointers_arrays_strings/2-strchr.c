#include <stdio.h>
#define NULL ((void *)0)

/**
* _strchr - swap to integer
*@s: pointer string
*@c: pointer string
* Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	while (*s != c)
	if (!*s++)
		return (NULL);

	return (s);
}
