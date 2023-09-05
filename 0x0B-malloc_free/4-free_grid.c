#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function to free a 2D grid
 * previously created by alloc_grid
 * @grid: the pointer to grid to free
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
