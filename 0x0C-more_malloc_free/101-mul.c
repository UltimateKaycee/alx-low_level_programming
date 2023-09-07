#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function to tell if the string
 * consists of digits
 * @argv: pointer to current item in argument
 * Return: return 0 if all digits, 1 if not all digits.
 */
int _isdigit(char *argv)
{
	int a;

	a = 0;

	while (argv[a])
	{
	if (argv[a] >= '0' && argv[a] <= '9')
	a++;
	else
	return (1);
	}
	return (0);
}
/**
 * _atoi - function to convert a string of ascii
 * digits to the values they represent
 * @str: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *str)
{
	int a, result;

	a = result = 0;

	while (str[a])
	{
	if (str[a] >= '0' && str[a] <= '9')
	{
	result *= 10;
	result += (str[a] - '0');
	}
	a++;
	}
	return (result);
}
/**
 * main - the maiin function call
 * @argc: argument count
 * @argv: 2-D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int a;

	malloc();
	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	for (a = 1; a < argc; a++)
	{
	if (_isdigit(argv[a]))
	{
	printf("Error\n");
	exit(98);
	}
	}
	return (0);
}
