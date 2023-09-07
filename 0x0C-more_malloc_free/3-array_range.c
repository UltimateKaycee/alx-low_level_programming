#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - function to get absolute value
 * @num: number to calculate
 * Return: absolute value of the number
 */
int _abs(int num)
{
	num < 0 ? (num *= -1) : (num = num);
	return (num);
}

/**
 * array_range - function to create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *arc;

	int range, a;

	if (min > max)
	return (NULL);
	range = max - min + 1;

	arc = malloc(range * sizeof(*arc));

	if (arc == NULL)
	return (NULL);
	for (a = 0; a < range; min++, a++)
	arc[a] = min;

	return (arc);
}
