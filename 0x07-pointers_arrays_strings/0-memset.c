#include "main.h"

/**
 * _memset - A fuunction that fills the first n bytes of
 *  a memory area with a constant byte
 * @bloom: pointer to memory area to be filled
 * @giny: pointer to constant byte to be used
 * @num: number of bytes at s to be filled
 * Return: pointer "s" to filled memory area
 */
char *_memset(char *bloom, char giny, unsigned int num)
{
	unsigned int free;

	free = 0;

	while (free < num)
	{
	bloom[free] = giny;

	free++;

	}
	return (bloom);
}
