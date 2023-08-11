#include <stdio.h>
/**
*main - Entry point
*Description: "prints all possible combinations of two two-digit numbers"
*Return: Always 0 (Success)
*/
int main(void)
{
int seti, setj;
for (seti = 0; seti < 100; seti++)
{
for (setj = 0; setj < 100; setj++)
{
if (seti < setj)
{
putchar((seti / 10) + 48);
putchar((seti % 10) + 48);
putchar(' ');
putchar((setj / 10) + 48);
putchar((setj % 10) + 48);
if (seti != 98 || setj != 99)
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
