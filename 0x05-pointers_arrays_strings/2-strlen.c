#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

int _strlen(char *s)
{
    int i;
    i = 0;
    while (*s != '\0')
    {
        s++;
        i++;
    }
    return (s);
}




