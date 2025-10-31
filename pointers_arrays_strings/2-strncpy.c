#include "main.h"

/**
 * _strncpy - concatenates two string
 *@dest: destination
 *@src: source
 *@n: n bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
