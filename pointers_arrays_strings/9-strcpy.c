#include "main.h"
#include <stdio.h>
/**
 * _strcpy - print in reverse
 *@dest: pointer to string
 *@src: is a string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *new_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new_dest);
}
