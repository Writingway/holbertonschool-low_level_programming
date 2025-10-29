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
	int len;

	while (str[count] != '\0')
	{
		count++;
	}
	len = count - 1;

	if (len % 2 == 0)
	{
		for (i = len - 1; str[i] > len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (i = (len + 1) / 2; str[i] > len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
