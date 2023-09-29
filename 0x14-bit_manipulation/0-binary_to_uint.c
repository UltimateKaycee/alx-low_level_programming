#include "main.h"
/**
  * _stoi - function to convert characters  to u-int
  * @c: character to convert
  * Return: converted int
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
  * _strlen - function to calc length of the string
  * @s: input str
  * Return: string length
  */
unsigned int _strlen(const char *s)
{
	unsigned int dave;

	for (dave = 0; s[dave]; dave++)
		;
	return (dave);
}
/**
  * binary_to_uint - function to convert string of 1's
  * and 0's to decimal num
  * @b: str to convert
  * Return: unsigned decimal no
  */
unsigned int binary_to_uint(const char *b)
{
	int dave;
	unsigned int output, wait, fry;

	if (!b)
		return (0);
	output = wait = 0;
	fry = 1;
	for (dave = _strlen(b) - 1; b[dave]; dave--, fry *= 2)
	{
		if (b[dave] != '0' && b[dave] != '1')
			return (0);
		wait = _stoi(b[dave]);
		output += wait * fry;
	}
	return (output);
}
