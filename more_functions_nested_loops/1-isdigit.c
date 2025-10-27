#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit (0 to 9)
 * @c: param to check
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
