#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - function concatenates two strings
 * up to n bytes.
 * @str1: source string
 * @str2: string to truncate up to num bytes
 * @num: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	char *beef;

	unsigned int str1count, str2count, sizeBuffer, a;

	if (str1 == NULL)
	str1 = "";

	if (str2 == NULL)
	str2 = "";

	for (str1count = 0; str1[str1count]; str1count++)
	;
	for (str2count = 0; str2[str2count]; str2count++)
	;
	str2count > num ? (str2count = num) : (num = str2count);
	sizeBuffer = str1count + str2count + 1;

	beef = malloc(sizeBuffer * sizeof(char));

	if (beef == NULL)
	return (NULL);
	for (a = 0; a < sizeBuffer - 1; a++)
	a < str1count ? (beef[a] = str1[a]) : (beef[a] = str2[a - str1count]);

	beef[sizeBuffer] = '\0';
	return (beef);
}
