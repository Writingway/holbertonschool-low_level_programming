#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prints buffer in hexa
 * @str: pointer to char
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int len = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}

	arr[len] = '\0';
	return (arr);
}
