#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - check the allocation
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr = calloc(nmemb, size);

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
