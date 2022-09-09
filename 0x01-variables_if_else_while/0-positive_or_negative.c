#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing
 *
 * Description: The function prints a text
 * depending on the conditions
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX;

	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n == 0)
	{
		printf("%i is zero", n);
	}
	else
	{
		printf("%i is negative", n);
	}
