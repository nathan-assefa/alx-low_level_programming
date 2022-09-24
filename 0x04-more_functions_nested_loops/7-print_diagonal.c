#include "main.h"

/**
 * print_diagonal- Printig diagonal
 *
 * @n: parameter
 */
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i, j;

i = 0;
while (i < n)
{
j = 0;
while (j < i)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
i++;

}
}
}