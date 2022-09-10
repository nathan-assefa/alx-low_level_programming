#include <stdio.h>

/**
 * main - printing
 *
 * Description: this function prints
 * numbers back to back
 * Return - 0 when the program is succeed
 */
int main(void)
{
int num = 0;

while (num <= 9)
{
printf("%i", num);
num++;
}
printf("\n");

return (0);
}
