#include "main.h"

/**
 * print_triangle - check the code
 * @size: int to check
 * Retursize: Always 0.
 */
void print_triangle(int size)
{
	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
