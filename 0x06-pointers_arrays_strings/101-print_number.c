#include "main.h"

/**
 * print_number- Printing number
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n = num;
	}

	if ((n / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((n % 10) + '0');
}
