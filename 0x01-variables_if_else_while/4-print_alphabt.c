#include <stdio.h>

/**
 * main - printing
 *
 * Return: 0
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

else
{
putchar(lower);
lower++;
}

}
putchar('\n');
return (0);
}
