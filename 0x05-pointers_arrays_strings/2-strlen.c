#include "main.h"

/**
 * _strlen- Printing the length of a string
 *
 * @s: a pointer
 * Return: always a length of a string
 */
int _strlen(char *s)
{
    int i;
    i = 0;
    while (*s != '\0')
    {
        s++;
        i++;
    }
    return (i);
}