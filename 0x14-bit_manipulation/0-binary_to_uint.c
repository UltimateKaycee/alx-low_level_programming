#include "main.h"
/**
  * _stoi - to conv char to int
  * @c: char to convert
  * Return: the int
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
  * _strlen - to calc len of string
  * @s: input
  * Return: len of string
  */
unsigned int _strlen(const char *s)
{
	unsigned int high;

	for (high = 0; s[high]; high++)
		;
	return (high);
}
/**
  * binary_to_uint - to conv string of ones and
  * zeros to decimal number
  * @b: string to conv
  * Return: unsigned decimal num
  */
unsigned int binary_to_uint(const char *b)
{
	int high;
	unsigned int output, temp, rival;

	if (!b)
		return (0);
	output = temp = 0;
	rival = 1;
	for (high = _strlen(b) - 1; b[high]; high--, rival *= 2)
	{
		if (b[high] != '0' && b[high] != '1')
			return (0);
		temp = _stoi(b[high]);
		output += temp * rival;
	}
	return (output);
}
