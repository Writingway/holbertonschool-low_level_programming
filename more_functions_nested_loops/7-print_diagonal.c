#include "main.h"

/**
 * print_diagonal - check the code
 * @n : integer to check
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int i, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
