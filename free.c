#include "shell.h"

/**
 * free_grid - free memory
 * @grid: grid to  delete
 * @height: value to delete
 *
 * Return: none;
 */
void free_grid(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
