#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap to integer
 *@a: pointer integer
 *@b: pointer integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
