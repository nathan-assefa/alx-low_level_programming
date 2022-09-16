#include "main.h"

/**
 * print_triangle-  a function that prints a triangle
 *
 * @size: argument
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			putchar(' ');

		for (k = 1; k <= i; k++)
			putchar('#');

		putchar('\n');
	}
}
