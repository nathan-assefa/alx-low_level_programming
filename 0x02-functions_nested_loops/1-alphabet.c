#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}

	_putchar('\n');
}
