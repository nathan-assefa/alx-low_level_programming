#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument counter
 * @argv: argument vector or list
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int Product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	Product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", Product);
	return (0);
}
