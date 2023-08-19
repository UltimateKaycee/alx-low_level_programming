#include <stdio.h>

/**
 * main - function to create fizz buzz from numbers 1 to 100
 * Description: function to print fizz for multiples of 3,
 * Buzz for multiples of 5, and
 * 3 and 5 for multiples of both 3 and 5.
 *
 * Return: 0
 */
int main(void)
{
	int bright;

	bright = 1;

	while (bright <= 100)
	{
	if (bright % 3 == 0 && bright % 5 == 0)
	printf("FizzBuzz");
	else if (bright % 3 == 0)
	printf("Fizz");
	else if (bright % 5 == 0)
	printf("Buzz");
	else
	printf("%d", bright);
	if (bright != 100)
	printf(" ");
	bright++;

	}
	printf("\n");
	return (0);
}
