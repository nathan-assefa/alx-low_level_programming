#include "main.h"
#include <string.h>

/**
 * print_rev- Reversing order
 *
 * @s: pointer
 */
void print_rev(char *s)
{
    char tmp;
    int i, len1, len2;

    while (s[len1] != '\0')
    {
            len1++;
    }

    len2 = len1 - 1;
    for (i = 0; i < len1 / 2; i++)
    {
        tmp = s[1];
        s[i] = s[len2];
        s[len2] = tmp;
        len2 -= 1;
    }
}