#include "function_pointers.h"

/**
 * print_name - function prints a name
 *
 * @name: input string or name
 * @f: input function to print name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	f(name);
}
