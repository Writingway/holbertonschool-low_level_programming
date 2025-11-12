#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the allocation
 * @min: unsigned int
 * @max: unsigned int
 * Return: Nothing.
*/

int *array_range(int min, int max)
{
	int *newPtr;
	int i;
	int totalElements = 0;

	if (min > max)
		return (NULL);

	totalElements = max - min + 1;

	newPtr = malloc(totalElements * sizeof(int));

	if (newPtr == 0)
		return (NULL);

	for (i = 0; i < totalElements; i++)
	{
		newPtr[i] = min + i;
	}

	return (newPtr);
}
