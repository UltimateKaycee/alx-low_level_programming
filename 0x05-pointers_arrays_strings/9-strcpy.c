#include "main.h"

/**
 * _strcpy - a function to copy the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @src: pointer variable of char type
 * @dest: pointer variable o char type
 * Return: a sequence of characters
 */

char *_strcpy(char *dest, char *src)
{
	int new, old;

	new = 0;

	while (src[new] != '\0')

	{

	new++;

	}
	for (old = 0; old <= new; old++)
	{
	*(dest + old) = *(src + old);
	}
	return (dest);
}
