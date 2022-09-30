#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        printf("%i\n", 0);
    }
    else
    {
        for (i = 1; i <= argc; i++)
        {
            if (isdigit(argv[i]) != 0)
            {
                printf("Error\n");
                return (1);
            }

            sum += atoi(argv[i]);
        }
        printf("%d", sum);
    }
    return (0);
}