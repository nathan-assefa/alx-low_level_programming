#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- Printig diagonal
 *
 * @n: parameter
 */

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

i = 0;
while (i < n)
{
j = 0;
while (j < n)
{
if (i == j)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}

}