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
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56)
			{
				putchar(',');
				putchar(' ');
			}


		}
	}
	putchar('\n');
	return (0);
}
