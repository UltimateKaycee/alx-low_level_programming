#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate two strings
 * using at most an input number of bytes.
 * @str1: first string.
 * @str2: second string.
 * @num: maximum number of bytes of str2 to concatenate to str1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	char *concat;

	unsigned int len = num, index;

	if (str1 == NULL)
	str1 = "";

	if (str2 == NULL)
	str2 = "";

	for (index = 0; str1[index]; index++)
	len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	return (NULL);
	len = 0;

	for (index = 0; str1[index]; index++)
	concat[len++] = str1[index];

	for (index = 0; str2[index] && index < num; index++)
	concat[len++] = str2[index];

	concat[len] = '\0';

	return (concat);
}
