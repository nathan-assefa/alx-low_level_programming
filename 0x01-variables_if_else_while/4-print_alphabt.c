#include <stdio.h>

/**
 * main - printing
 *
 * Return: 0 when the function succeed
 */
int main(void)
{
char lower = 'a';

while (lower <= 'z')
{

if (lower == 'q' || lower == 'e')
{
lower++;
continue;
}

putchar(lower);
return (0);
}
}
