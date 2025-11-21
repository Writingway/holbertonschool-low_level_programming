#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - division
 * @n: name of the person
 * Return: Division.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);

	return (result);
}
