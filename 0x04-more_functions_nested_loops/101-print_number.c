#include <stdio.h>

void print_number(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(1024);
    putchar('\n');
}
void print_number(int n)
{
    printf("%d\n", n);
}
