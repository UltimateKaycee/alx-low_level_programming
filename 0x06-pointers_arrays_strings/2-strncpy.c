#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 * @blink: int type variable
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int blink)
{
	int high, low;

	for (high = 0; src[high] != '\0'; high++)
	{
	if (high < blink)
	{
	dest[high] = src[high];

	}
	}
	low = high;

	for (; blink > low; low++)
	dest[low] = '\0';

	return (dest);
}
