#include "main.h"

/**
 * _memset - wrting n bytes in the memory
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: always a charachter
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
