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
/*needle = "world"*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j + i] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
