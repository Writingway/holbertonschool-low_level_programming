#include "main.h"

/**
 * puts_half - print in reverse
 *@str: pointer to string
 * Return: Always 0.
 */
void puts_half(char *str)
{

	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = (count + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
