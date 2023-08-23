#include "main.h"

/**
 * _strcat - a function to concatenate two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 *
 * Return: a pointer to the produced "dest" string
 */

char *_strcat(char *dest, char *src)
{
	int high, low;

	for (high = 0; dest[high] != '\0'; high++)
	;
	for (low = 0; src[j] != '\0'; low++)

	dest[high + low] = src[low];
	dest[high + low] = '\0';

	return (dest);
}
