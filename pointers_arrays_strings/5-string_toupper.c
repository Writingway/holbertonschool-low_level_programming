#include "main.h"
#include <stdio.h>

/**
 * string_toupper - print in reverse
 *@str: pointer to string
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
