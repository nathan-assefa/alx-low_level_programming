#include "main.h"
#include <string.h>

/**
 * puts_half- printng half string
 *
 * @str: parameter
 */
void puts_half(char *str)
{
    int i, j;

    j = strlen(str);
    for (i = j / 2; i < j ; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}