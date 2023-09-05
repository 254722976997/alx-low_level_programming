#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid created previously
* @grid: Pointer to the array 2-D
* @height: height of array 2-D
*
* Return: always void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
