#include "main.h"
#include <stdio.h>

/**
 * main - function to check code
 *
 * Return: Always 0.
 */
int main(void)
{
    char brook[10] = "ALX is simply cool";
    
    printf("%s\n", brook);
    rev_string(brook);
    printf("%s\n", brook);
    return (0);
}
