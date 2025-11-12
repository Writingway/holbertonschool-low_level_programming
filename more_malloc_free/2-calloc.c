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
	unsigned int i = 0;
	unsigned int totalSize = 0;
	void *newPtr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	totalSize = nmemb * size;

	if (nmemb != 0 && totalSize / nmemb != size)
		return (NULL);

	newPtr = malloc(totalSize);

	if (newPtr == NULL)
		return (NULL);

	for (i = 0; i < totalSize; i++)
	{
		((char *)newPtr)[i] = 0;
	}

	return (newPtr);
}
