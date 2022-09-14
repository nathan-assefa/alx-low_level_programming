#include "main.h"

/**
 * print_alphabet_x10: Function to print abc 10 times;
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	int i, lower;

	for (i = 0; i < 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}

		_putchar('\n');
	}
}
