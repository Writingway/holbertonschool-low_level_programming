#include "main.h"
#include <stdio.h>

/**
 * _memset - encodes a string in 1337
 * @str: string to be encoded
 * @b: string to be encoded
 * @n: string to be encoded
 *
 * Return: the resulting string;
 */

/*
 *    //printf("%d\n", *str);
 *    //printf("%d\n", b);
 *    //printf("%d\n", n);
 */

char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}
	return (str);
}
