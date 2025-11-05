#include <stdio.h>
#include "main.h"
/**
 * factorial - print a string
 * @n: The character to print
 *
 * Return: On success 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
