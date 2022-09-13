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
		putchar(lower);
		lower++;
	}

	putchar('\n');
}
