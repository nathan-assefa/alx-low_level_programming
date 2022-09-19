#include "main.h"
#include <string.h>

/**
 * puts2- printig even characters
 *
 * @str: paramamer
 */
void puts2(char *str)
{
    int i, j;

    j = strlen(str);
    for (i = 0; i < j - 1; i++)
    {
        if (i % 2 == 0)
           _putchar(str[i]);
    }
    if (i == 46)
       _putchar('.');
   _putchar('\n');
}