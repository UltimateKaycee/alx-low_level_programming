#include <stdio.h>
/**
*main - Entry point
*Description: "A prints all possible different combinations of three digits"
*Return: Always 0 (Success)
*/
int main(void)
{
int setn, setm, setl;
for (setn = 48; setn < 58; setn++)
{
for (setm = 49; setm < 58; setm++)
{
for (setl = 50; setl < 58; setl++)
{
if (setl > setm && setm > setn)
{
putchar(setn);
putchar(setm);
putchar(setl);
if (setn != 55 || setm != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
