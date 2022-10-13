#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- printing strings using variadic function
 *
 * @separator: separator
 * @n: number of optional arguments
 * @...: optional arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *x;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(ap, char*);
			if (x == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", x);

			if (i != (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ap);
	}
}
