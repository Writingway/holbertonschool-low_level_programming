#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check if is lower
 *@n: The character to check
 * Return: Always 0.
 * Description: This function prints the alphabet, in lowercase 10 time
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", 98);
}
