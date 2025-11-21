#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - print character
 * @list: name of the person
 * Return: Division.
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_i - print integer
 * @list: name of the person
 * Return: Division.
 */
void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_f - print float
 * @list: name of the person
 * Return: Division.
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_s - print string
 * @list: name of the person
 * Return: Division.
 */
void print_s(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print_all
 * @format: name of the person
 * Return: Division.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list list;

	type_format params[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *params[j].name)
			{
				printf("%s", separator);
				params[j].fptr(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(list);
}
