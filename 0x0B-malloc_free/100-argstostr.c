#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to concatenate all arguments
 * of the program.
 * @ac: The argument count
 * @av: The pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int a, b, len, bufferlen;

	char *beef;

	if (ac == 0)
	return (NULL);
	if (av == NULL)
	return (NULL);
	a = b = len = bufferlen = 0;

	for (a = 0; av[a]; a++)
	{
	for (b = 0; av[a][b]; b++)
	len++;
	}
	beef = (char *)malloc(len * sizeof(char) + ac + 1);

	if (beef == NULL)
	return (NULL);
	for (a = 0; av[a]; a++)
	{
	for (b = 0; av[a][b]; b++, bufferlen++)
	beef[bufferlen] = av[a][b];

	beef[bufferlen] = '\n';

	bufferlen++;
	}
	beef[bufferlen] = '\0';

	return (beef);
}
