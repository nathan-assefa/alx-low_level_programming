#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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

    if (separator && n)
    {
        x = malloc(sizeof *x * n);
        if (x == NULL)
        {
            return;
        }

        va_start(ap, n);

        for (i = 0; i < n; i++)
        {
            x = va_arg(ap, char*);
            if (x == NULL)
            {
                printf("nil");
            }
            printf("%s", x);

            if (i != (n - 1))
            {
                printf(", ");
            }
        }
        va_end(ap);
    }
    _putchar('\n');

}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}