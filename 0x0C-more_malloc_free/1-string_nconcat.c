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
	char *p;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;
	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		p[i] = s2[i - len1];
	}
	p[i] = '\0';

	return (p);


}
