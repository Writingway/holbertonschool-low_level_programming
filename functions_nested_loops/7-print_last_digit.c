#include "main.h"
/**
 * print_last_digit - check if is lower
 * @n: The character to check
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}
