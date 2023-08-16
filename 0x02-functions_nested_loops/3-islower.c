#include "main.h"
/**
* int _islower - Entry point
* Description: function that checks for lowercase characters and returns 1 or 0
* @ch:int
* _islower:int
* Return: @ch value
*
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
