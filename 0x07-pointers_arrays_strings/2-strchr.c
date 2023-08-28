#include "main.h"

/**
 * _strchr - function that returns a pointer to
 * first occurence of a particular char in a string
 * @bloom: a pointer to string to be examined
 * @chtr: char searched for in string at bloom
 * Return: place in string a match is found or NULL if no match
 */
char *_strchr(char *bloom, char chtr)
{
	int free;

	free = 0;

	while (bloom[free]  != '\0')
	{
	if (bloom[free] == chtr)
	{
	bloom = bloom + free;

	return (s);
	}
	free++;
	}
	if (chtr == '\0')
	return (bloom + free);
	return (0);
}
