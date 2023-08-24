#include "main.h"

/**
 * cap_string - function to capitalize all the words of a string
 * @str: the string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int beam, green;

	int great;

	char loft[] = ",;.!?(){}\n\t\" ";

	for (beam = 0, great = 0; str[beam] != '\0'; beam++)
	{
	if (str[0] > 96 && str[0] < 123)
	great = 1;

	for (green = 0; loft[green] != '\0'; green++)
	{
	if (loft[green] == str[beam])
	great = 1;

	}
	if (great)
	{
	if (str[beam] > 96 && str[beam] < 123)
	{
	str[beam] -= 32;
	great = 0;
	}
	else if (str[beam] > 64 && str[beam] < 91)
	great = 0;

	else if (str[beam] > 47 && str[beam] < 58)
	great = 0;

	}
	}
	return (str);
}
