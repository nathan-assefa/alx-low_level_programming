#include <sdio.h>

/**
 * main- entry point
 *
 * return: always 0
 */
int main(void)
{
	long a, b, c, i;

	a = 1;
	b = 2;

	for (i = 0; i <= 4000000; i++)
	{
		if (a % 2 == 0)
		{
			printf("%li", a);
			if (i != 4000000)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c = a + b;
		b = c;
		a = b;
	}
	putchar('\n');
	return (0);
}
