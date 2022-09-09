#include <stdio.h>

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
