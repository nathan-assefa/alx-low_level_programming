#include "main.h"
#include <stdio.h>
void print_num(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}

int _pow_recursion(int x, int y)
{
    int z;

    z = x ^ y;
    if ((z / 10) > 0)
        print_num(z);
    putchar(z);
}

void print_num(int n)
{
    if ((n / 10) > 0)
    {
        print_num(n / 10);
    }
    putchar((n % 10) + '0');
}