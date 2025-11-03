#include "main.h"
#include <stdio.h>
/**
 * _strspn - print in reverse
 *@s: pointer to string
 *@accept: is a string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}

	return (len);
}
