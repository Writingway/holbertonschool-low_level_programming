#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - prints buffer in hexa
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	unsigned int len2 = 0;
	char *arr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);


	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	arr = malloc((len + len2 + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		arr[i] = s2[j];
	}

	arr[len + len2] = '\0';
	return (arr);
}
