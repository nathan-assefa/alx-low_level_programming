#include "main.h"
#include <string.h>

/**
 * _strncpy - copying string
 *
 * @dest: pointer
 * @src: pointer
 * @n: length
 * Return: string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
