#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_char - function to print characters
 * @c: chars to print
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * p_int - function to print integers
 * @i: int to print
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * p_float - function to print floats
 * @f: float to print
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * p_string - function to print strings
 * @s: str to print
 */
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);

	if (string == NULL)
	string = "(nil)";

	printf("%s", string);
}
/**
 * print_all - function to print any
 * argument passed to it
 * @format: will format symbol in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;

	char *separator;

	va_list argp;

	v_types valid_types[] = {
	{"c", p_char},
	{"i", p_int},
	{"f", p_float},
	{"s", p_string}
	};
	i = j = 0;
	separator = "";
	va_start(argp, format);
	while (format && format[i])
	{
	j = 0;
	while (j < 4)
	{
	if (format[i] == *valid_types[j].valid)
	{
	printf("%s", separator);
	valid_types[j].f(argp);
	separator = ", ";
	}
	j++;
	}
	i++;
	}
	printf("\n");
}
