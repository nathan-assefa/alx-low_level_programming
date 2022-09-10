#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: this function prints
 * the joined numbers back to back
 * Return: 0 when the program is successful
 */
int main(void)
{
	int num1 = 48;

	while(num1 <= 57)
	{
		putchar(48);
		putchar(num1);
		if (num1 != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num1++;

	}
	putchar('\n');
	return (0);
}
