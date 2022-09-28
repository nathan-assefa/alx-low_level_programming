#include "main.h"

/**
 * _puts_recursion - printing string
 *
 * @s: pointer
 */
void _puts_recursion(char *s)
{
    int i = 0;

    if (s[i] == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(s[i]);
    i++;
    _puts_recursion(s + i);
}