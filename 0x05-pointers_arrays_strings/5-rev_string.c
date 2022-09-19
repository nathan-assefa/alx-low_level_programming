#include "main.h"

/**
 * rev_string- Revesing string
 *
 * @s: parameter
 */
void rev_string(char *s)
{
    int i;

    for (i = 9; i >= 0; i--)
    {
        *s = *(s + i);
    }
    putchar('\n');
}