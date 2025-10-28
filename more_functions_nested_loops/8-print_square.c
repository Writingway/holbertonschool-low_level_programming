#include "main.h"

/**
 * print_square - check the code
 * @size: int to check
 * Retursize: Always 0.
 */
void print_square(int size)
{
	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
