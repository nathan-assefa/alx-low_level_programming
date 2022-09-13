#include "main.h"

/**
 * main - Entery point
 *
 * print_alphabet_x10: prints lowercase alphabets
 * ten times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}

		_putchar('\n');
	}
	_putchar('\n');
}
