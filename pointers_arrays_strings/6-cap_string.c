#include "main.h"
#include <stdio.h>

/**
 * cap_string - print in everse
 *@str: pointer to string
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;

	char caract[] = {',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}', ' ', '	', '\n'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == caract[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
