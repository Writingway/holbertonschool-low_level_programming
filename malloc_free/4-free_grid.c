#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @grid: pointer to char
 * @height: pointer to char
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
