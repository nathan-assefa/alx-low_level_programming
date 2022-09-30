#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

<<<<<<< HEAD
/**
 * main - entry point
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
=======
>>>>>>> 7a18a61124a8fa2909b5abb18f51605735a1e90f
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("%i\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
int j;
char *str;

str = argv[i];
for (j = 0; j < str[j]; j++)
{
if (str[j] < 48 || str[j] > 57)
{
printf("Error\n");
return (1);
}

}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d", sum);
}
return (0);
}
