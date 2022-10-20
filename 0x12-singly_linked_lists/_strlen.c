#include <stdio.h>

/**
 * _strlen - to find the length of a string
 * @str: pointer to a string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;
	while (s[len])
	{
		len++;
	}

	return (len);
}
