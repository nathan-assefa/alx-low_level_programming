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
	int num1, num2, num3;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}


		}
	}
	putchar('\n');
	return (0);
}
