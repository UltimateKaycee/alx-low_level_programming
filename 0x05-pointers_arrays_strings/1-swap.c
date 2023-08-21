#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @hard: int pointer variable
 * @soft: another int pointer variable
 * Return: nothing
 */

void swap_int(int *hard, int *soft)
{
	int number;

	number = *hard;

	*hard = *soft;

	*soft = number;
}
