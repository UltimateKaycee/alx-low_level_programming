#include "main.h"
#include <stdio.h>
/**
  * get_endianness - function to check endianness
  * Return: for big endian, zero and for 
  * for little endian, one
  */
int get_endianness(void)
{
	int thin;
	char *made;

	thin = 1;
	made = (char *)&thin;
	return ((int)made[0]);
}
