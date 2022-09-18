#include "main.h"
#include <stdio.h>

/**
 * main- entery point
 *
 * return: 0
 */
int main(void)
{
	long long int a, b, c, sum, i, num;

	a = 1;
	b = 2;
	num = 0;

	for (i = 1; i <= 4000000; i++)
	{
		if (sum % 2 == 0)
		{
			num += sum;
		}

		c = a + b;
		sum = a + b + c;
		a = b;
		b = c;
	}
	printf("%lli\n", num);
	return(0);
}