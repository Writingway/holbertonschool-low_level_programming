#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - print a string
 * @n: int args
 * Return: On success 1.

 * _sqrt_recursion_helper - print a string
 * @n: int args
 * @i: int args
 * Return: On success 1.
 **/

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_helper(n, 0));
}
