#include "main.h"

/**
 * _puts- printing strings
 *
 * @str: pointer
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
}