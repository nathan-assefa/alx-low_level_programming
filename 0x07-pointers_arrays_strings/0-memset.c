#include "main.h"

/**
 * -memset- Reading n bytes
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: always char
 */
char *_memset(char *s, char b, unsigned int n)
{
while(n)
{
s[n - 1] = b;
n--;
}
return (s);
}