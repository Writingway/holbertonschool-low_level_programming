#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print only numbers
 * @separator: name of the person
 * @n: name of the person
 * Return: Division.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(list, char *));
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
