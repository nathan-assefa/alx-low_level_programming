#include <stdio.h>

/**
 * main - printing
 *
 * Return: 0 when the program succeed
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (uppercase <= 'Z')
{

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}
