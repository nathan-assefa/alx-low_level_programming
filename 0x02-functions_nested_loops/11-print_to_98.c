#include <stdio.h>

/**
 * print_to_98- a function that prints all natural numbers
 * from n to 98, followed by a new line
 *
 * @n: the argument
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	else if (n > 98)
	{
		for (i = n; i >=98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	printf("\n");
}
