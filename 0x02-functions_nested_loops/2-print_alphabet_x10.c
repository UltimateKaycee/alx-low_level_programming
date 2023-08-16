#include "main.h"
/**
* main - Entry point
* Description: program to print_alphabet_x10 in lowercase.
*
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)

{
	char ch = 'a';
	int i = 0;
	for (; i < 10; i++)
	{
	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	ch = 'a';
	_putchar ('\n');
	}
}
