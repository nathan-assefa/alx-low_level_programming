#include "main.h"

/**
 * _strlen_recursion - printing the length of a string
 *
 * Return: Always len.
 */
int _strlen_recursion(char *s)
{
    int len = 0;

    if (s[len])
    {
        len++;
        return (len += _strlen_recursion(s + 1));
    }
}