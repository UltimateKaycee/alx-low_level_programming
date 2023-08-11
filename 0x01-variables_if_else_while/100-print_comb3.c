#include <stdio.h>
/**
*main - Entry point
*Description: "prints all possible different combinations of two digits"
*Return: ALways 0 (Success)
*/
int main(void)
{
int setn, setm;
for (setn = 48; setn <= 56; setn++)
{
for (setm = 49; setm <= 57; setm++)
{
if (setm > setn)
{
putchar(setn);
putchar(setm);
if (setn != 56 || setm != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
