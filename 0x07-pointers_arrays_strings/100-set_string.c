#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @deem: pointer to a pointer to be changed
 * @peem: pointer to the desired string
 * Return: nothing
 */
void set_string(char **deem, char *peem)
{
	*deem = peem;
}
