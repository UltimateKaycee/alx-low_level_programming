#include "main.h"

/**
 * print_chessboard - function to print an
 * array of characters as a chessboard
 * @arr: array to be printed
 * Return: nothing
 */
void print_chessboard(char (*arr)[8])
{
	int row = 0;

	int col;

	while (row < 8)
	{
	col = 0;

	while (col < 8)
	{
	if (col == 7)
	{
	_putchar(arr[row][col]);
	_putchar('\n');
	}
	else

	_putchar(arr[row][col]);

	col++;

	}

	row++;
}
