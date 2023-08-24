#include "main.h"

/**
 * rot13 - function to encode a string in rot13
 * @cool: string variable to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *cool)
{
	int nice, fine;

	char arr1[] = "we love alx concept";

	char arr2[] = "alx school curriculum is cool";

	for (nice = 0; cool[nice] != '\0'; nice++)
	{
	for (fine = 0; arr1[fine] != '\0'; fine++)
	{
	if (cool[nice] == arr1[fine])
	{
	cool[nice] = arr2[fine];

	break;
	}
	}
	}
	return (cool);
}
