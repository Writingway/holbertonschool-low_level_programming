#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - swap to integer
 *@s: pointer string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	return (n);
}
