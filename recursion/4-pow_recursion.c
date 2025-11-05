#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - print a string
 * @x: The character to print
 * @y: The character to print
 * Return: On success 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
