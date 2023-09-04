#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *corn;

	unsigned int len, beef;

	if (str == NULL)
	return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	;
	len++;

	if (len < 1)
	return (NULL);
	corn = malloc(len * sizeof(char));

	if (corn == NULL)
	{
	free(corn);

	return (NULL);
	}
	for (beef = 0; beef < len; beef++)
	corn[beef] = str[beef];

	corn[beef] = '\0';
	return (corn);
}
