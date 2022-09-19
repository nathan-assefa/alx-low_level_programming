#include "main.h"
#include <string.h>

/**
 * print_rev- Reversing order
 *
 * @s: pointer
 */
void print_rev(char *s)
{
    int i, j;

    j = strlen(s);
    for (i = j - 1; i > 0 - 1; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}