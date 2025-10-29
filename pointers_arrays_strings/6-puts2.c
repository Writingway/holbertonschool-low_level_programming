#include "main.h"

/**
 * puts2 - print in reverse
 *@str: pointer to string
 * Return: Always 0.
 */
void puts2(char *str)
{

	int count = 0;
	int i;
	int len;

	while (str[count] != '\0')
	{
		count++;
	}
	len = count - 1;
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
