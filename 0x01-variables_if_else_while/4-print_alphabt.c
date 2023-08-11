#include <stdio.h>
/**
*main - entry point
*Description: "prints the alphabet in lowercase except q and e."
*Return: Aways 0 (Sucess)
*/
int main(void)
{
char cha = 'a';
while (cha <= 'z')
{
if (cha != 'e' && cha != 'q')
{
putchar(cha);
}
cha++;
}
putchar('\n');
return (0);
}
