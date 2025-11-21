#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print only numbers
 * @separator: name of the person
 * @n: name of the person
 * Return: Division.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
