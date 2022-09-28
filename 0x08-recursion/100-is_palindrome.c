#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

int p1(char *s, int l)
{
    if (l < 1)
    return (1);

    if (*s == *(s + 1))
    return (p1(s + 1, l - 2));

    return (0);
}

int _strlen_recursion(char *s)
{
    if (*s == '\0')
    return (0);

    else
    {
        return (1 + _strlen_recursion(s + 1));
    }
}

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return (p1(s, len - 1));
}