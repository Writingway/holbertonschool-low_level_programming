#include <stdio.h>
#include "main.h"

int is_actual_prime_number(int n, int i);

/**
 * is_actual_prime_number - print a string
 * @n: int args
 * @i: int args
 * Return: On success 1.
 **/
int is_actual_prime_number(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_actual_prime_number(n, i + 1));
}

/**
 * is_prime_number - print a string
 * @n: int args
 * Return: On success 1.
 **/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_actual_prime_number(n, 2));
}
