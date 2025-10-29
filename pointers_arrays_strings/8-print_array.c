#include "main.h"
#include <stdio.h>
/**
 * print_array - print in reverse
 *@a: pointer to string
 *@n: is a string
 * Return: Always 0.
 */
void print_array(int *a, int n)
{

	for (n = 0; n < a; n++)
	{
		if (n == 0)
			printf("%d", n);
		else
			printf(", %d", n);
	}
}
