#include "main.h"

/**
 * _print_rev_recursion - revesing a string
 *
 * @s: a pointer to a string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
