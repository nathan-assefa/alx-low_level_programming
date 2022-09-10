#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0 when the progam is successful
 */
int main(void)
{
char lower = 'z';

while (lower >= 'a')
{
putchar(lower);
lower--;
}

putchar('\n');
return (0);
}
