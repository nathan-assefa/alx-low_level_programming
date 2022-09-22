#include "main.h"

void print_number(int n);
/**
 * print_number- Printing number
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int num = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }

        if ((num / 10) > 0)
                print_number(n / 10);
        _putchar((num % 10) + '0');
}