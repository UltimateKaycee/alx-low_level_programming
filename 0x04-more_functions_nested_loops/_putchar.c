#include <unistd.h>

/**
 * _putchar - function prints c character to stdout
 * @rooc: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char rooc)
{
	return (write(1, &rooc, 1));
}
