#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- creating printf
 * @format: to format the function
 */
void print_all(const char * const format, ...)
{
	char arr[] = {'c', 'i', 'f', 's'};
	int i = 0, len = 0;
	va_list arg;

	while (format[len])
		len++;

	va_start(arg, format);

	while (i < len)
	{
		int j = 0;

		while (j < 1)
		{
			if (format[i] == arr[0])
			{
				char x = va_arg(arg, int);
				printf("%c", x);
			}
			else if (format[i] == arr[1])
			{
				int x = va_arg(arg, int);
				printf("%i", x);
			}
			else if (format[i] == arr[2])
			{
				double x = va_arg(arg, double);
				printf("%f", x);
			}
			else if (format[i] == arr[3])
			{
				char *x = va_arg(arg, char*);
				if (x == NULL)
				{
					printf("nil");
				}
				printf("%s", x);
			}
			j++;
		}
		if (i < len - 1 && (format[i] == arr[0] || format[i] == arr[1] || format[i] == arr[2] || format[i] == arr[3]))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
