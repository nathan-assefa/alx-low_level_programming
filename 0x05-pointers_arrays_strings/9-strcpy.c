#include "main.h"
#include <string.h>

/**
 * _strcpy- Copying
 *
 * @dest: argumet
 * @src: argument
 * Return: dest;
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0, n = strlen(src); i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
