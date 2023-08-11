#include <stdio.h>
/**
*main - Entry point
*Description: "prints all possible combinations of single-digit numbers"
*Return: Always 0 (Success)
*/
int main(void)
{
int nos;
for (nos = 48; nos < 58; nos++)
{
putchar(nos);
if (nos != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
