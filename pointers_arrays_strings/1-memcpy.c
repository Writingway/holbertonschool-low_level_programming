#include "main.h"
#include <stdio.h>

/**
 * _memcpy - encodes a string in 1337
 * @dest: string to be encoded
 * @src: string to be encoded
 * @n: string to be encoded
 *
 * Return: the resulting string;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new_dest = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (new_dest);
}
