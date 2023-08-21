#include "main.h"
#include <stdio.h>

/**
 * main - checking code
 *
 * Return: Always 0.
 */
int main(void)
{
    int hard;

    int soft;

    hard = 98;
 
    soft = 42;
 
    printf("a=%d, b=%d\n", hard, soft);
 
    swap_int(&hard, &soft);
 
    printf("a=%d, b=%d\n", hard, soft);
    return (0);
}
