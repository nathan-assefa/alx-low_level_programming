#include "main.h"

/**
 * _strchr - locates a charachter in a string
 * @s: pointer
 * @c: parameter
 *
 * Retrun: always a charachter
 *
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