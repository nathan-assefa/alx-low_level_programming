#include "main.h"

/**
 * _strchr - locates a charachter in a string
 * @s: pointer
 * @c: parameter
 *
 * Return: always a s plus 1
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (s + i);
}

if (s[i] == c)
return (s + i);
return (0);
}
