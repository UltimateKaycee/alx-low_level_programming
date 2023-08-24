#include "main.h"
#include <stdio.h>

/**
 * main - function checks code
 * @bloom: an array of integers
 * @bleak: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *bloom, int bleak)
{
    int nice;
    
    nice = 0;
    
    while (nice < bleak)
    {
     if (nice != 0)
     {
      printf(", ");
      }
     printf("%d", bloom[nice]);
     nice++;
    }
    printf("\n");
}

/**
 * main - function checks code
 *
 * Return: Always 0.
 */
int main(void)
{
    int bloom[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(bloom, sizeof(bloom) / sizeof(int));
    reverse_array(bloom, sizeof(bloom) / sizeof(int));
    print_array(bloom, sizeof(bloom) / sizeof(int));
    return (0);
}
