#include "main.h"

/**
 * _puts - function that print a string
 *@str: pointer
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}

	_putchar('\n');
}
