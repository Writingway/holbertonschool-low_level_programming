#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - prints buffer in hexa
 * @b: pointer to char
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *result = malloc(b);

	if (result == NULL)
		exit(98);

	return (result);
}
