#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: The character to print
 *
 * Return: On success 1.
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
