#include <stdio.h>
/**
*main - Entry point
*Description: "A program that prints all single digit numbers of base 10 starting from 0, no type char"
*Return: Always 0 (Success)
*/
int main(void)
{
int nos;
for (nos = 48; nos < 58; nos++)
{
putchar(nos);
}
putchar('\n');
return (0);
}
