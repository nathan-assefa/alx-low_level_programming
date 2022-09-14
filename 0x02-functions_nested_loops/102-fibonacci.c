#include <stdio.h>

/**
 * main- entry point
 *
 * return: 0
 */
int main(void)
{
	int a, b, c;

	a = 1;
	b = 2;
	int i;

	for (i = 1; i < 50; i++)
	{
		printf("%d\n", a);
		putchar(',');
		putchar(' ');

		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
