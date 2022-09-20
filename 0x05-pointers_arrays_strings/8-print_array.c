#include "main.h"
#include <stdio.h>

/**
 * print_array- Printing array values
 *
 * @a: pointer
 * @n: length of an array
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);

        if (i < 4 )
        {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}