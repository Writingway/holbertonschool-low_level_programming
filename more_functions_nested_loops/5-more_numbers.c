#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int turn = 10;
	char number = 14;

	for (turn = 0; turn <= 10; turn++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar('0' + (number / 10));
			_putchar('0' + (number % 10));
		}
		_putchar('\n');
	}
}
