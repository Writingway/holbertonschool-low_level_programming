#include "main.h"

/**
 * _atoi - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */

int _atoi(char *str)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (str[i] == '-')
			++d;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
