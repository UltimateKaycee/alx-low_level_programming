#include <stdio.h>
/**
* main - Entry point
*Description: "prints the alphabet in lowercase, and then in uppercase, followed by a new line"
*Return: Always 0 (Success)
*/
int main(void)
{
int cha;
for (cha = 'a'; cha <= 'z'; cha++)
putchar(cha);
for (cha = 'A'; cha <= 'Z'; cha++)
putchar('\n');
return (0);
}
