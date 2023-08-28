#include "main.h"

/**
 * _memcpy - function to copy n bytes from one memery area to another
 * @dest: pointer to destination for n bytes of src
 * @src: pointer to bytes to be copied
 * @num: number of bytes of src to be copied
 * Return: pointer dest to the copy
 */
char *_memcpy(char *dest, char *src, unsigned int num)
{
	unsigned int free;

	free = 0;

	while (free < num)
	{
	dest[free] = src[free];

	free++;

	}
	return (dest);
}
