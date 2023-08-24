#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @cool: an input string variable to encode
 * Return: encoded string
 */
char *leet(char *cool)
{
	int nice = 0, fine;

	char numAr[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},

	strAr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (cool[nice])

	{
	for (fine = 0; fine < 10; fine++)
	if (cool[nice] == strAr[fine])
	cool[nice] = numAr[fine];

	nice++;
	}
	return (cool);
}
