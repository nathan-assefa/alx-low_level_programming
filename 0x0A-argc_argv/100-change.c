#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the least amout of coin
 *
 * @argc: argument count
 * @argv: argument list
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int total, cents[] = {25, 10, 5, 2, 1}, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
total = atoi(argv[1]);

if (total < 0)
{
printf("0\n");
return (0);
}
while (total > 0)
{
if (total >= cents[0])
total -= cents[0];
else if (total >= cents[1])
total -= cents[1];
else if (total >= cents[2])
total -= cents[2];
else if (total >= cents[3])
total -= cents[3];
else if (total >= cents[4])
total -= cents[4];
else
break;

coins++;
}
printf("%d\n", coins);
}
return (0);
}
