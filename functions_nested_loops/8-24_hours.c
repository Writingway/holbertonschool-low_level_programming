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

	for (number_hours = 0; number_hours < 24; number_hours++)
	{
		for (number_min = 0; number_min < 60; number_min++)
		{
			printf("%02d:%02d\n", number_hours, number_min);
		}
	}
}
