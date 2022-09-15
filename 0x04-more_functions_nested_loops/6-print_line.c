#include "main.h"

/**
 * print_line- print lines
 *
 * @n: argument
 */
void print_line(int n)
{
	while (n-- < 0)
		_putchar('_');
	_putchar('n');
}
