#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}

void print_array(int *a, int n)
{
     char tmp;
    int i, len1, len2;

    while (s[len1] != '\0')
    {
            len1++;
    }

    len2 = len1 - 1;
    for (i = 0; i < len1 / 2; i++)
    {
        tmp = s[i];
        s[i] = s[len2];
        s[len2] = tmp;
        len2 -= 1;
    }
}