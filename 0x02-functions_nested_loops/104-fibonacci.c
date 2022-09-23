#include "main.h"

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
recursion(a);
}
else
{
_putchar(a + '0');
}

if (i != 97)
{
_putchar(',');
_putchar(' ');
}

c = a + b;
a = b;
b = c;
i++;
}
_putchar('\n');
return (0);
}

void recursion(unsigned int n)
{
if (n / 10)
recursion(n / 10);

_putchar(n % 10 + '0');
}