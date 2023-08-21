#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @brook: input string
 * Return: integer from conversion
 */
int _atoi(char *brook)
{
	int sign = 1;

	unsigned int total = 0;

	char null_flag = 0;

	while (*brook)
	{
	if (*brook == '-')

	sign *= -1;

	if (*brook >= '0' && *brook <= '9')
	{

	null_flag = 1;
	total = total * 10 + *brook - '0';
	}
	else if (null_flag)
	break;
	brook++;

	}
	if (sign < 0)
	total = (-total);

	return (total);
}
