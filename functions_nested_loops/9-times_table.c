#include "main.h"
/**
 * times_table - check if is lower
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
void times_table(void)
{
	int line = 9;
	int columns = 9;
	int result;

	for (line = 0; line <= 9; line++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			result = line * columns;
			if (columns != 0 && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar('0' + result);
			}
		}
		_putchar('\n');
	}
}
