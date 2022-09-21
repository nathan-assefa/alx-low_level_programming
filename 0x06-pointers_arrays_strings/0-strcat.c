#include "main.h"

/**
 * _strcat- Concatinating two strings
 *
 * @dest: a pointer
 * @src: another pointer
 * Return: always dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
