#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summing number using variadic function
 *
 * @n: fixed argument
 * @...: optional arguments
 * Return: always int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}
