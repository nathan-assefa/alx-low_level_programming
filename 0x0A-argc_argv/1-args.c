#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argumetnt count
 * @argv: argument vector or list
 * Return: Alwasys 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
