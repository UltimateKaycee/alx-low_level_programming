#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function to free 2-D grid pr * eviously created by alloc_grid
 * @grid: the pointer to grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
