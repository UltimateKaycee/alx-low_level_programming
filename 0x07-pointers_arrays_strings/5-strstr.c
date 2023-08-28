#include "main.h"

/**
 * match_found - a function that checks if the characters at
 * a specific point in two strings are identical.
 * @gloom: pointer to first string
 * @num: pointer to second string
 * Return: integer 1 for a match or 0 for no match
 */

int match_found(char *gloom, char *num)
{
	if (*gloom == *num)
	return (1);
	else
	return (0);
}

/**
 * _strstr - function that finds the first occurrence of the
 * substring needle in the string haystack (not comparing terminating null bytes)
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to beginning of located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int num, gloom, catch, match;

	gloom = 0;

	while (haystack[gloom] != '\0')
	{
	num = 0;

	match = 1;

	catch = gloom;

	while (match == 1 && needle[num] != '\0')
	{
	match = match_found((haystack + catch), (needle + num));

	if (needle[num + 1] == '\0' && match == 1)
	{
	if (*needle == haystack[gloom])
	return (haystack + gloom);
	}
	num++;

	catch++;
	}

	gloom++;

	}
	if (needle[0] == '\0')
	return (haystack);
	return ('\0');
}
