#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: print the largest prime factor of
 * the given set of numbers 612852475143
 * Return: 0
 */
int main(void)
{
	int rooc;

	long number = 612852475143;

	for (rooc = (int) sqrt(number); rooc > 2; rooc++)
	{
	if (number % rooc == 0)
	{
	printf("%d\n", rooc);
	break;
	}
	}
	return (0);
}
