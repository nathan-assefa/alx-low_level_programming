#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Cpying strings
 * @str: pointer to string array
 * Return: char *
*/
char *_strdup(char *str)
{
	int i, n;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	*copy = malloc(sizeof(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0, n = strlen(str); i <= n; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
	free(copy);
}
