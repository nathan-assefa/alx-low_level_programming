#include "main.h"

/**
 * print_times_table- printing numbers
 *
 * @n: parameter
 */
void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{

int i, j, prod;

for (i = 0; i <= n; i++)
{
_putchar('0');

for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');

prod = i * j;
if ((prod / 10) > 0)
{
if (prod < 100)
_putchar(' ');
print_number(prod);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');

}
}
_putchar('\n');
}
}
}

/**
 * print_number- Recursion
 *
 * @n: parameter
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}