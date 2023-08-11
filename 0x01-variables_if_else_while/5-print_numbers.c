#include <stdio.h>
/**
*main - Entry point
*Description: "program prints all single digit numbers of base 10 starting from 0, followed by a new line"
*Return: Always 0 (Success)
*/
int main(void)
{
int nos;
for (nos = 0; nos < 10; nos++)
printf("%d", nos);
printf("\n");
return (0);
}
