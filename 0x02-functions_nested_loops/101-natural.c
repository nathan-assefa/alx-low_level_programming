#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int num = 0;

	for (c = 1; c < 10; c++)
	{

		if (c % 3 == 0 || c % 5 == 0)
		{
			num += c;
		}
	}
	printf("%d\n", num);
	return (0);
}
