#include "main.h"

/**
 * _strcmp - a function that will compare two strings
 *
 * @str1: pointer variable of pointer
 * @str2: pointer variable of pointer
 *
 * Return: integer as exit status
 */

int _strcmp(char *str1, char *str2)
{
	int high;

	for (high = 0; str1[high] != '\0' || str2[high] != '\0'; high++)
	{
	if (str1[high] != str2[high])
	{
	return (str1[high] - str2[high]);
	}
	}
	return (0);
}
