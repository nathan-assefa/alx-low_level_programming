#include <stdio.h>

/**
 * _strlen - to find the length of a string
 * @str: pointer to a string
 */
int _strlen(const char *s)
{
	int len = 0;
	while (s[len])
	{
		len++;
	}

	return (len);
}
