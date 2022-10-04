#include "main.h"
#include <stdlib.h>

/**
 * create_array- Crating an array of strings
 * @c: parameter
 * @size: parameter
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s

	if (size == 0)
		return (0);

	*s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
	free(s);
}
