#include "main.h"
#include <stdio.h>

/**
 * rev_string- Revesing string
 *
 * @s: parameter
 */
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
        char tmp;
        int i, len1, len2;

        len1 = 0;

        while (s[len1] != '\0')
        {
                len1++;
        }
        printf("len1 is %d\n", len1);

        len2 = len1 - 1;
        for (i = 0; i < len1 / 2; i++)
        {
                tmp = s[i];
                s[i] = s[len2];
                s[len2] = tmp;
                len2 -= 1;
        }
}