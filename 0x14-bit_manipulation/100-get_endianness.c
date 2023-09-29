#include "main.h"
#include <stdio.h>
/**
  * get_endianness - A function to return
  * processor endianness
  * Return: if big endian - (0)
  * else if little endian - (1)
  */
int get_endianness(void)
{
	int run;

	char *check;

	run = 1;

	check = (char *)&run;

	return ((int)check[0]);
}
