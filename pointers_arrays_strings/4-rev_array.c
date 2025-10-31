#include "main.h"

/**
 * reverse_array - print in reverse
 *@a: pointer to string
 *@n: n of bytes
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int i;
	int len;
	int temp;

	while (count < n)
	{
		count++;
	}
	len = count - 1;
	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[len];
		a[len--] = temp;
	}
}
