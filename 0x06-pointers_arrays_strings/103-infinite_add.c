#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @num1: first number
 * @num2: second number
 * @result: result
 * @len_result: result length
 * Return: sum
 */
char *infinite_add(char *num1, char *num2, char *result, int len_result)

{
	/* local variable declaration */
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (num1[i] != '\0')
	i++;

	while (num2[j] != '\0')

	j++;
	if (i > j)
	
	l = i;
	else
	l = j;
	if (l + 1 > len_result)
	return (0);
	result[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
	i--;
	
	j--;
	
	if (i >= 0)
	f = num1[i] - '0';
	else
	f = 0;
	if (j >= 0)
	s = num2[j] - '0';
	else
	s = 0;
	result[k] = (f + s + d) % 10 + '0';
	d = (f + s + d) / 10;
	}
	if (d == 1)
	{
	result[l + 1] = '\0';
	if (l + 2 > len_result)
	return (0);
	while (l-- >= 0)
	result[l + 1] = result[l];
	result[0] = d + '0';
	}
	return (result);
}
