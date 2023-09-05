#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordcounter - function to count words and
 * letters in them
 * @str: string to count
 * @posi: position of word to count characters in
 * @char1: position of first letter of word
 * if posi is 0, count number of chars in the word
 * else count number of words
 * Return: wordcount if posi is 0,
 * length of word if posi greater than 0,
 * position of word if pos greater than 0 &&
 * firstchar greater than 0
 */
int wordcounter(char *str, int posi, char char1)
{
	int a, wordcount, charcount, flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
	for (a = 0, flag = 0; str[a]; a++)
	{
	if (str[a] == ' ' && str[a + 1] != ' ' && str[a + 1] != '\0' && flag == 0)
	{
	wordcount++;

	flag = 1;

	}
	if (posi > 0 && posi == wordcount)
	{
	if (posi > 0 && posi == wordcount && char1 > 0)
	return (a);
	for (charcount = 0; str[a + charcount + 1] != ' '; charcount++)
	;
	return (charcount);
	}
	if (str[a] == ' ')
	flag = 0;
	}
	return (wordcount);
}
/**
 * strtow - function to convert a string into
 * a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */
char **strtow(char *str)
{
	int wc, wordlen, getfirstchar, len, a, b;

	char **beef;

	for (len = 0; str[len]; len++)
	;
	if (str == NULL)
	return (NULL);
	wc = wordcounter(str, 0, 0);

	if (len == 0 || wc == 0)
	return (NULL);
	beef = malloc((wc + 1) * sizeof(void *));

	if (beef == NULL)
	return (NULL);
	for (a = 0, wordlen = 0; a < wc; a++)
	{
	/* memory for nested elements */
	wordlen = wordcounter(str, a + 1, 0);

	if (a == 0 && str[a] != ' ')
	wordlen++;
	beef[a] = malloc(wordlen * sizeof(char) + 1);

	if (beef[a] == NULL)
	{
	for ( ; a >= 0; --a)
	free(beef[a]);
	free(beef);
	return (NULL);
	}
	/* initialize each element of nested array with word*/
	getfirstchar = wordcounter(str, a + 1, 1);

	if (str[0] != ' ' && a > 0)
	getfirstchar++;
	else if (str[0] == ' ')
	getfirstchar++;
	for (b = 0; b < wordlen; b++)

	beef[a][b] = str[getfirstchar + b];

	beef[a][b] = '\0';
	}
	beef[a] = NULL;

	return (beef);
}
