#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - printing number
 *
 * @separator: separator
 * @n: number of optional arguments to be passed
 * @...: optioinal arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%i", x);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
