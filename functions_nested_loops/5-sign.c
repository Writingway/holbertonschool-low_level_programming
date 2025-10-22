#include "main.h"
/**
 * print_sign - check if is lower
 * @n: The character to check
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
