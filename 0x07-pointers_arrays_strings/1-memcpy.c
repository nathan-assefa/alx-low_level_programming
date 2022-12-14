#include "main.h"

/**
 * _memcpy - copying a memory
 *  @dest: pointer
 *  @src: pointer
 *  @n: parameter
 *
 *  Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
