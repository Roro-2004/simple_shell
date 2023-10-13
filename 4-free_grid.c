#include <stdlib.h>
#include "shell.h"

/**
 * free_grid - function frees a grid
 *
 * @grid: parameter that taken to be checked
 */
void free_grid(char **grid)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; grid[i]; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

