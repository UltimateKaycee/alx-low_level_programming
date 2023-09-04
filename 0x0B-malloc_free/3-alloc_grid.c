#include <stdlib.h>
/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int a, b;

	int **v;

	a = b = 0;

	if (height < 1)
	return (NULL);
	v = (int **)malloc(height * sizeof(v));

	if (v == NULL)
	{
	free(v);
	return (NULL);
	}
	for (a = 0; a < height; a++)
	{
	v[a] = malloc(width * sizeof(int));

	if (v[a] == NULL)
	{
	for (b = 0; b < a; b++)
	free(v[b]);

	free(v);
	return (NULL);
	}
	for (b = 0; b < width; b++)
	v[a][b] = 0;
	}
	return (v);
}
