#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0 when the progam is succeed
 */
int main(void)
{
int num = 48;

while (num <= 57)
{
putchar(num);

if (num != 57)
{
putchar(',');
putchar(' ');
}

num++;
}

putchar('\n');
return (0);
}
