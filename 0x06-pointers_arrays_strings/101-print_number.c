#include "main.h"

void print_number(int n);
/**
 * print_number- Printing number
 * @n: parameter
 */
void print_number(int n)
{
<<<<<<< HEAD
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
=======
        if (n < 0)
        {
                putchar('-');
                n = -n;
        }

        if (n / 10)
                print_number(n / 10);

        putchar(n % 10 + '0');
}
>>>>>>> 55c35b6e10d196d79303781e15579fae211f63b4
