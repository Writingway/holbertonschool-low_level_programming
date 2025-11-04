#include "main.h"
#include <stdio.h>
#define NULL ((void *)0)
/**
 * _strstr - locates a substring
 *@haystack: pointer to string
 *@needle: is a string
 * Return: Always 0.
 */

/*haystack = "hello, world"*/
/* needle = "world"*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
				{
					return (haystack + i);
				}
				else
					return (NULL);
			}
		}
	}

	return ('\0');
}
