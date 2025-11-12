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
	unsigned int j = 0;
	unsigned int k = 0;
	int **grid;

	if (size == 0)
		return (NULL);

	grid = malloc(nmemb * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		grid[i] = malloc(nmemb * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
