#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: pointer to char
 * @height: pointer to char
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
