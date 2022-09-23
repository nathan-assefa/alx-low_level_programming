#include "main.h"
#include <stdio.h>

/**
 * main- this function prints the first
 * 98 fibonacci numbers
 * Return: always 0;
 */
int main(void)
{
    unsigned int a, b, c, i = 0;

    a = 1;
    b = 2;
    while (i < 98)
    {
        if ((a / 10) > 0)
        {
            print_number(a);
        }
        else
        {
            putchar(a + '0');
        }

        if (i != 97)
        {
            putchar(',');
            putchar(' ');
        }

        c = a + b;
        a = b;
        b = c;
        i++;
    }
    putchar('\n');
    return (0);
}

void print_number(unsigned int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    putchar(n % 10 + '0');
}