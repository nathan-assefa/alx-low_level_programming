#include "main.h"


/**
 * string_toupper- Changing to uppercase
 * @s: pointer to a string
 *
 * Return: Always s.
 */
char *string_toupper(char *s)
{
    int i = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else
        {
            s[i];
        }
    }
    return (s);
}