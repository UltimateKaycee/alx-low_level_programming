#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: string
 * @src: string
 * @blink number of items to concatenate
 * Return: `dest`
 */

char *_strncat(char *dest, char *src, int blink)
{
	int high, dash;

	for (high = 0; dest[high] != '\0'; high++)
	;
	for (dash = 0; src[dash] != '\0' && blink > 0; dash++, blink--, high++)
	{
	dest[high] = src[dash];
	
	}
	return (dest);
}
