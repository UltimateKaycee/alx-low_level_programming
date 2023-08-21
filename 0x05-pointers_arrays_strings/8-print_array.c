#include "main.h"
#include <stdio.h>

/**
 * print_array - a function to print n elements
 * of an array of integers followed by a new line.
 * @lock: int pointer variable
 * @num: int type variable
 */

void print_array(int *lock, int num)
{
	int nice;

	for (nice = 0; nice < num; nice++)
	{
	printf("%d", *(lock + nice));
	if (nice != num - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
