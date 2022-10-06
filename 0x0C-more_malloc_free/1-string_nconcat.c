#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- concatinatinig string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: alway *char
 * @n: interger parameter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, m;
	char *str_concat;

	str_concat = malloc(strlen(s1) + strlen(s2) + 1);
	if (str_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0, m = strlen(s1); i < m; i++)
	{
		str_concat[i] = s1[i];
	}
	if (n >= strlen(s2))
		strcat(str_concat, s2);

	else
		strncat(str_concat, s2, n);
	str_concat += '\0';

	return (str_concat);

}
