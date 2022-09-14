#include "main.h"

/**
 * print_alphabet_x10: prints lowercase alphabets
 * ten times
 *
 * Description: This function prints lowercase letters
 * Return: Always 0
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
