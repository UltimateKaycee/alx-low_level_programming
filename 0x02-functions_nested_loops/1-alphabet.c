#include "main.h"
/**
* main - Entry point
* Description: "a function that prints the alphabet, in lowercase, followed by a new line"
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char cha;
	cha = 'a';
while (cha <= 'z')
{
	_putchar(cha);
	cha++;
}
	_putchar('\n');
}
