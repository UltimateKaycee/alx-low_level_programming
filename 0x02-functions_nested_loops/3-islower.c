#include "main.h"
/**
* main - Entry point
* Description: function that checks for lowercase characters and returns 1 or 0
* @c:int
* Return: @c value
*/
int _islower(int ch)
{
	if (ch > 96 && ch < 123)
	return (1);
	else
	return (0);
	/* putchar (ch); */
	/* printf("la va de ch=%d\n", ch); */
}
