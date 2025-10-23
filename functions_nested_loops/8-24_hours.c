#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - check if is lower
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
void jack_bauer(void)
{
	int number_min = 59;
	int number_hours = 23;
	int hour_tens;
	int hour_units;
	int min_tens;
	int min_units;

	for (number_hours = 0; number_hours < 24; number_hours++)
	{
		hour_tens = number_hours / 10;
		hour_units = number_hours % 10;
		for (number_min = 0; number_min < 60; number_min++)
		{
			min_tens = number_min / 10;
			min_units = number_min % 10;
			_putchar('0' + hour_tens);
			_putchar('0' + hour_units);
			_putchar(':');
			_putchar('0' + min_tens);
			_putchar('0' + min_units);
			_putchar('\n');
		}
	}
}
