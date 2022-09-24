#include "main.h"
#include <stdio.h>

/**
 * main- entry point
 *
 * Return: always 0
 */
int main(void)
{
int n = 4000000;
int a, b, c, sum = 0;

a = 0;
b = 1;

while (a <= n)
{
if (a % 2 == 0)
{
sum += a;
}
c = a + b;
a = b;
b = c;
}
printf("%d", sum);
putchar('\n');
return (0);

}