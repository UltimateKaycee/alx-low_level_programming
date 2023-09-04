#include <stdlib.h>
/**
 * str_concat - fuunction concatenates two strings
 * @str1: first string
 * @str2: second string
 * Return: pointer to a new buffer containing str1 and str2
 */
char *str_concat(char *str1, char *str2)
{
	char *beef;

	int str1count, str2count, sizeBuffer, i;

	if (str1 == NULL)
	str1 = "";

	if (str2 == NULL)
	str2 = "";

	for (str1count = 0; str1[str1count]; str1count++)
	;
	for (str2count = 0; str2[str2count]; str2count++)
	;
	sizeBuffer = str1count + str2count + 1;

	beef = malloc(sizeBuffer * sizeof(char));

	if (beef == NULL)
	return (NULL);
	for (i = 0; i < sizeBuffer; i++)
	i < str1count ? (beef[i] = str1[i]) : (beef[i] = str2[i - str1count]);
	return (beef);
}
