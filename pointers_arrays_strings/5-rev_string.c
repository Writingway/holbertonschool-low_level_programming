#include "main.h"

/**
 * rev_string - print in reverse
 *@s: pointer to string
 * Return: Always 0.
 */
void rev_string(char *s)
{

	int count = 0;
	int i;
	int len;
	int temp;

	while (s[count] != '\0')
	{
		count++;
	}
	len = count - 1;
	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
