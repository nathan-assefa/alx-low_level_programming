#include "main.h"

/**
 * _strncat- concatinating string using bytes
 *
 * @dest: a pointer to a string
 * @src: a pointer to another string data
 * @n: is a variable to count byte
 * Return: always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; i != '\0'; i++)
	{
		dest[len] = sizeof(src[n]);
		len++;
	}
	dest[len] = '\0';
	return (0);
}
