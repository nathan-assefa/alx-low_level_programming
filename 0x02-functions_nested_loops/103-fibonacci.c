#include "main.h"
#include <stdio.h>

/**
 * main- entery point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long long a, b, c, sum, i;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 4000000; i++)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		c = a + b;
		a = b;
		b = c;
	}

	printf("%llu\n", sum);
	return (0);
}
