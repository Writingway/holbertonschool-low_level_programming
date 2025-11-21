#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct type_print - Struct type
 *
 * @name: The operator
 * @fptr: The function associated
 */
typedef struct type_print
{
	char *name;
	void (*fptr)(va_list);
} type_format;

void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);

void print_all(const char * const format, ...);
#endif
