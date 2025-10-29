#include "main.h"

/**
 * print_rev - print in reverse
 *@s: pointer to string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
