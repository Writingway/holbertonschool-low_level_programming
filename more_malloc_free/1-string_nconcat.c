#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the allocation
 * @s1: char
 * @s2 : char
 * @n : unsigned int
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	unsigned int len2 = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
		n = len2;

	arr = malloc((len + n + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		arr[i] = s2[j];
	}

	arr[len + n] = '\0';
	return (arr);
}
