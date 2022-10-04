#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatinating two strings
 *
 * @s1: pointer to the first string
 * @s2: poitner to the second string
 * Return: always char*
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i, j;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	concat = malloc(strlen(s1) + strlen(s2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j <= strlen(s2); j++)
	{
		concat[strlen(s1) + j] = s2[j];
	}

	return (concat);
	free(concat);
}
