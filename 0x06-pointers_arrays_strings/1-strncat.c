#include "main.h"
#include <string.h>

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
	strncat(dest, src, n);
	return (dest);
}
