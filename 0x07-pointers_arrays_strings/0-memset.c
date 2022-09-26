#include "main.h"

/**
 * _memset - writing n bytes to memory
 * @s: parameter
 * @n: parameter
 * @b: parameter
 *
 * Return: always pointer
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
