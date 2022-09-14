#include "main.h"

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
			_printf("%d", i);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	for (i = n; i >98; i--)
	{
		_printf("%d", i);
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_printf("\n");
}
