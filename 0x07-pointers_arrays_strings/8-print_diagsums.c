#include "main.h"
#include <stdio.h>

/**
 * print_diagsumis - function to prints sum of two
 * diagonals in a square matrix of ints
 * @arr: the pointer to 2d array
 * @size: number of columns in each row of the array
 * Return: nothing
 */
void print_diagsums(int *arr, int size)
{
	int sum;

	int *hit = arr;

	int count = 1;

	sum = *hit;

	while (count < size)
	{
	sum = sum + *(hit + size + 1);

	hit = hit + size + 1;

	count++;
	}
	printf("%d, ", sum);

	sum = *(arr + size - 1);

	count = 1;

	while (count < size)
	{
	arr = arr + size - 1;

	sum = sum + *(arr + size - 1);

	count++;

	}
	printf("%d\n", sum);
}
