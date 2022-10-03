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
    int i, n, j, m;

    char *concat = malloc(strlen(s1) + strlen(s2) + 1);
    if (concat == NULL)
    {
        return (NULL);
    }

    for (j = 0, m = strlen(s1); j < m; j++)
    {
        concat[j] = s1[j];
    }

    for (i = 0, n = strlen(s2); i <= n; i++)
    {
        concat[m + i] = s2[i];
    }

    return concat;
    free(concat);
}