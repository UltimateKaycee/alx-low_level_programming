#include <stdio.h>
/**
*main - Entry point
*Description: "prints all the numbers of base 16 in lowercase, followed by a new line"
*Return: Always 0 (Success)
*/
int main(void)
{
int nos;
char cha;
for (nos = 48; nos < 58; nos++)
{
putchar(nos);
}
for (cha = 'a'; cha <= 'f'; cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
}
