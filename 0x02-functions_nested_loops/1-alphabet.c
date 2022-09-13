#include "main.h"


/**
 * main - check the code
 *
 * print_alphabet: prints the lowercase alphabet
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
